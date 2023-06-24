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
    switch (delivery)
    {
    case Delivery::PickUpStation:
        {
            return "PickUpStation";
        }break;
    case Delivery::DoorDelivery:
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

std::string StationTypeToString(StationType station){
    switch (station)
    {
    case StationType::Ramsis:
        {
            return "Ramsis";
        }break;
    case StationType::Fifth_Settlement:
        {
            return "Fifth_Settlement";
        }break;
    case StationType::Six_October:
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
    switch (method)
    {
    case PayMethodType::CashOnDelivery:
        {
            return "CashOnDelivery";
        }break;
    case PayMethodType::Fawry:
        {
            return "Fawry";
        }break;
    case PayMethodType::CreditCard:
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
    
public:
    Customer(std::string name,std::string address,std::string number,std::string email):
            m_Name(name),m_Address(address),m_Number(number),m_Email(email){

            }
    void customerDate() const {
        std::cout << "Name: " << m_Name << "\n"
                  << "E-Mail: "<< m_Email << "\n"
                  << "Address: " << m_Address << "\n"
                  << "Number:"   << m_Number << "\n";
    }
};


class Product{
    private:
        float m_Price;
        std::string m_Name;
        std::string m_Description;
    public:
        Product(){}
        Product(std::string& name, std::string& description, float& price):
                m_Name(std::move(name)),m_Description(std::move(description)),m_Price(std::move(price))
        {

        }

        std::string productName() const{
            return m_Name;
        }
        float productPrice() const{
            return m_Price;
        }
        std::string productDescription() const{
            return m_Description;
        }
};

class Cart{
    private:
        std::map<std::string,std::pair<Product,uint16_t>>  m_Product;
        double m_Total;

    public:
        Cart():m_Total(0){}
        void addProduct(Product& product,uint16_t productQ){
            auto it = m_Product.find(product.productName());
            if(it != m_Product.end()){
                m_Product[product.productName()].second++;
            }else{
                     m_Product[product.productName()] = std::pair<Product,uint16_t>(product,productQ);
            }   
        }
        void removeProduct(std::string& element){
            auto it = m_Product.find(element);
            if(it != m_Product.end()){
                if(m_Product[element].second > 1){
                    m_Product[element].second--;
                }else{
                    m_Product.erase(element);
                }

            }else{
                std::cout << "this product isn't in the cart !!\n";
            }
            
        }
        double totalPrice(){
            for(auto itr = m_Product.begin(); itr != m_Product.end(); itr++){
                m_Total += itr->second.first.productPrice() * itr->second.second;
            }
            return m_Total;
        }
        std::vector<std::pair<Product,uint16_t>> Confirm(){
            std::vector<std::pair<Product,uint16_t>> orders;
            for(auto itr = m_Product.begin(); itr != m_Product.end(); itr++){
                orders.push_back(itr->second);
            }

            // for(auto itr = m_Product.begin(); itr != m_Product.end(); itr++){
            //     m_Product.erase(itr);
            // }

            return orders;
        }      
};
class Order{
    private:
        std::map<uint16_t, std::vector<std::pair<Product,uint16_t>>> orderedProducts;

    public:
        Order(){}

        void addCartProducts(std::vector<std::pair<Product,uint16_t>>& orders){
                orderedProducts[std::rand()] = orders;
        }
        

        void orderHistory(){
            std::cout << "Orders History:\n";
            for(auto itr = orderedProducts.begin(); itr != orderedProducts.end(); itr++){
                for(auto order : itr->second){
                    std::cout << "Order Number: " << itr->first << "\t"
                              << "Product Name: " << order.first.productName()
                              << " ,Product Quantities: " << order.second
                              << " ,Product Price: " << order.second * order.first.productPrice()
                              << "\n";
                }
            }
        }
};

class PaymentProcessor{
    private:
        double m_SubTotal ;
        float m_ShippingPrice;
        float m_DoorDeliveryPrice = 30.5;
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
        PaymentProcessor(double subTotal,Customer& customer):m_SubTotal(subTotal),m_Customer(customer){}

        void DeliveryType(Delivery deliverTO){
            switch(deliverTO){
            case Delivery::PickUpStation:
                {   uint16_t location;
                    do{
                        
                        std::cout << "choose the station:\n";
                        std::cout << "1- Ramsis\n2- 5th Settlement\n3- 6 October\n";
                        std::cin >> location;
                        m_ShippingPrice = DeliveryToStation(location);
                        if((location > 3) || (location < 1)){
                            std::cout << "Invalid Input\n";
                        }
                    }while((location > 3) || (location < 1));
                }break;
            case Delivery::DoorDelivery:
                {
                    //may be change ,but we can let it as a fix value right now 
                    m_ShippingPrice = m_DoorDeliveryPrice;
                }break;
            }
            m_Total = m_SubTotal + m_ShippingPrice;
            std::cout << "Subtotal: " << m_SubTotal << "\n"
                      << "Shipping: " << m_ShippingPrice << "\n"
                      << "Total: "    << m_Total << "\n";
        }

        void payMethod(PayMethodType method){
            switch(method){
            case PayMethodType::CashOnDelivery:
                {
                    std::cout << "the order will pay cashOnDelivery\n";
                    m_PayMethod = method;
                }break;
            case PayMethodType::Fawry:
                {
                     std::cout << "the order is paied by fawry\n";
                     m_PayMethod = method;
                }break;
            case PayMethodType::CreditCard:
                {
                     std::cout << "the order is paied by credit card\n";
                     m_PayMethod = method;
                }break;
            default:
                 "No valid input";
                break;  
            }
        }

        void orderSummary(){
            std::cout << "Order Summary: \n";
            m_Customer.customerDate();
            std::cout <<"Order Price: " << m_SubTotal << "\n"
                      <<"Shipping Price: " << m_ShippingPrice << "\n"
                      << "Total Price: " << m_Total << "\n"
                      << "Pay Method: " << PayMethodToString(m_PayMethod) << "\n";

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