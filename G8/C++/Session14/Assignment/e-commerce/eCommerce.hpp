#ifndef ECOMMERCE_H_
#define ECOMMERCE_H_

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <memory>
#include <algorithm>

enum class Delivery : uint16_t{
    PickUpStation = 0,
    DoorDelivery 
};

std::string DeliveryToString(Delivery delivery){
    switch (static_cast<uint16_t>(delivery))
    {
    case 0:
        {
            return "PickUpStation";
        }break;
    case 1:
        {
            return "DoorDelivery";
        }break;
    default:
        return "No valid input";
        break;
    }
}
enum class StationType : uint16_t{
    Ramsis = 1,
    Fifth_Settlement,
    Six_October
};

std::string StationTypeToString(StationType method){
    switch (static_cast<uint16_t>(method))
    {
    case 0:
        {
            return "Ramsis";
        }break;
    case 1:
        {
            return "Fifth_Settlement";
        }break;
    case 2:
        {
            return "Six_October";
        }break;
    default:
        return "No valid input";
        break;
    }
}

enum class PayMethodType : uint16_t{
    CashOnDelivery = 0,
    Fawry,
    CreditCard 
};

std::string PayMethodToString(PayMethodType method){
    switch (static_cast<uint16_t>(method))
    {
    case 0:
        {
            return "CashOnDelivery";
        }break;
    case 1:
        {
            return "Fawry";
        }break;
    case 2:
        {
            return "CreditCard";
        }break;
    default:
        return "No valid input";
        break;
    }
}

class Customer
{
private:
    std::string m_Name;
    std::string m_Address;
    std::string m_Number;
    std::string m_Email;
    uint16_t DoorDeliveryPrice;
public:
    Customer(std::string name,std::string address,std::string number,std::string email,uint16_t doorDeliveryPrice):
            m_Name(name),m_Address(address),m_Number(number),m_Email(email),DoorDeliveryPrice(doorDeliveryPrice){

            }
    void customerDate() const {
        std::cout << "Name: " << m_Name << "\n"
                  << "E-Mail: "<< m_Email << "\n"
                  << "Address: " << m_Address << "\n"
                  << "Number:"   << m_Number << "\n";
    }
    uint16_t DeliveryPrice(){
        return DoorDeliveryPrice;
    }
};


class Product{
    private:
        uint16_t m_Nproduct;
        float m_Price;
        std::string m_Name;
        std::string m_Description;
    public:
        Product(){}
        Product(std::string& name, std::string& description, float& price, uint16_t& nproduct):
                m_Name(std::move(name)),m_Description(std::move(description)),m_Price(std::move(price)),m_Nproduct(std::move(nproduct))
        {

        }

        std::string productName() const{
            return m_Name;
        }
        float productPrice() const{
            return m_Price * m_Nproduct;
        }
        void ModifyProductNumber(int x) {
            m_Nproduct += x;
        }
        uint16_t productNumber() {
            return m_Nproduct;
        }
        std::string productDescription() const{
            return m_Description;
        }
};

class Cart{
    private:
        std::map<std::string,std::pair<Product,uint16_t>>  m_Product;
        double m_Total;
        //std::shared_ptr<Order> m_Order;
    public:
        Cart():m_Total(0){}
        void addProduct(Product& product){
            auto it = m_Product.find(product.productName());
            if(it != m_Product.end()){
                m_Product[product.productName()].first.ModifyProductNumber(1);
            }else{
                     m_Product[product.productName()] = std::pair<Product,uint16_t>(product,std::rand());
            }   
        }
        void removeProduct(std::string& element){
            auto it = m_Product.find(element);
            if(it != m_Product.end()){
                if(m_Product[element].first.productNumber() > 1){
                    m_Product[element].first.ModifyProductNumber(-1);
                }else{
                    m_Product.erase(element);
                }

            }else{
                std::cout << "this product isn't in the cart !!\n";
            }
            
        }
        double totalPrice(){
            for(auto itr = m_Product.begin(); itr != m_Product.end(); itr++){
                m_Total += itr->second.first.productPrice() * itr->second.first.productNumber();
            }
            return m_Total;
        }
        std::vector<std::pair<Product,uint16_t>> Confirm(){
            std::vector<std::pair<Product,uint16_t>> orders;
            for(auto itr = m_Product.begin(); itr != m_Product.end(); itr++){
                orders.push_back(itr->second);
            }

            for(auto itr = m_Product.begin(); itr != m_Product.end(); itr++){
                m_Product.erase(itr);
            }

            return orders;
        }      
};
class Order{
    private:
        std::vector<std::pair<Product,uint16_t>> orderedProducts;

    public:
        Order(){}
        void addCartProducts(std::vector<std::pair<Product,uint16_t>> orders){
            orderedProducts = orders;
        }
        

        void orderHistory(){
            std::cout << "Orders History:\n";
            for(auto order : orderedProducts){
                std::cout << "Order Number: " << order.second
                          << "Product Name: " << order.first.productName()
                          << " ,Product Quantities: " << order.first.productNumber()
                          << " ,Product Price: " << order.first.productNumber() * order.first.productPrice()
                          << "\n";
            }
        }
};

class PaymentProcessor{
    private:
        double m_SubTotal ;
        float m_ShippingPrice;
        double m_Total ;
        PayMethodType m_PayMethod;
        Customer& m_Customer;
        float DeliveryToStation(uint16_t  station){
            switch (station)
            {
            case 1:
                {
                    return 14.5;
                }break;
            case 2:
                {
                    return 20.6;
                }break;
            case 3:
                {
                    return 26.3;
                }break;
            default:
                std::cout << "Invalid Input";
                return 0;
                break;
            }
        }
    public:
        PaymentProcessor(double subTotal,Customer customer):m_SubTotal(subTotal),m_Customer(customer){}

        void DeliveryType(Delivery deliverTO){
            switch(static_cast<int>(deliverTO)){
            case 0:
                {   
                    do{
                        uint16_t location;
                        std::cout << "choose the station:\n";
                        std::cout << "1- Ramsis\n2- 5th Settlement\n3- 6 October\n";
                        std::cin >> location;
                        m_ShippingPrice = DeliveryToStation(location);
                        if((m_ShippingPrice > 3) && (m_ShippingPrice < 1)){
                            std::cout << "Invalid Input\n";
                        }
                    }while((m_ShippingPrice > 3) && (m_ShippingPrice < 1));
                }break;
            case 1:
                {
                    m_ShippingPrice = m_Customer.DeliveryPrice();
                }break;
            }
            m_Total = m_SubTotal + m_ShippingPrice;
            std::cout << "Subtotal: " << m_SubTotal << "\n"
                      << "Shipping: " << m_ShippingPrice << "\n"
                      << "Total: "    << m_Total << "\n";
        }

        void payMethod(PayMethodType method){
            switch(static_cast<uint16_t>(method)){
            case 0:
                {
                    std::cout << "the order will pay cashOnDelivery\n";
                    m_PayMethod = PayMethodType::CashOnDelivery;
                }break;
            case 1:
                {
                     std::cout << "the order is paied by fawry\n";
                     m_PayMethod = PayMethodType::Fawry;
                }break;
            case 2:
                {
                     std::cout << "the order is paied by credit card\n";
                     m_PayMethod = PayMethodType::CreditCard;
                }break;
            default:
                 "No valid input";
                break;  
            }
        }

        void orderSummary(){
            std::cout << "Order Summary: \n";
            m_Customer.customerDate();
            std::cout << "Total Price: " << m_Total
                      << "Pay Method: " << PayMethodToString(m_PayMethod);

        }

};

class NotificationService{
    public:
        void orderPlaced(){
            std::cout << "Order is Placed and Pending  Confirmation\n";
        }
        void orderConfirmed(){
            std::cout << "Order is Confirmed and Waiting to be Shipped\n";
        }
        void orderShipped(){
            std::cout << "Order is shipped and Will get out for Delivery Soon\n";
        }
        void outForDelivery(){
            std::cout << "Our representative is in his way to you with your Order!\n";
        }
        void orderDelivered(){
            std::cout << "The order is Delivered *_* \n";
        }
};

#endif