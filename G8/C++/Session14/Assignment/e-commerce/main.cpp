#include "eCommerce.hpp"


int main(){
    std::string Name;
    std::string Address;
    std::string Number;
    std::string Email;
    uint16_t doorDeliveryPrice = 49;

    std::cout << "Enter Your Information For Registration: \n";
    std::cout << "Name: ";
    std::cin.ignore();
    std::getline(std::cin, Name);
    std::cout << "Address: ";
    std::cin.ignore();
    std::getline(std::cin, Address);
    std::cout << "Number: ";
    std::cin.ignore();
    std::getline(std::cin, Number);
    std::cout << "Email: ";
    std::cin.ignore();
    std::getline(std::cin, Email);
    /*std::cout << "-------------------------------------\n";
    std::cout << "Name: " + Name <<std::endl;

    std::cout << "Address: " + Address <<std::endl;

    std::cout << "Number: " + Number <<std::endl;

    std::cout << "Email: " + Email <<std::endl;
    */
    Customer customer(Name,Address,Number,Email,doorDeliveryPrice);
    Cart cart;
    Order orders;
    NotificationService notification;

    std::cout << "Welcome Mr." + Name + " To our store ;) \n\n";
    uint16_t productQ;
    float productPrice;
    std::string productName;
    std::string productDescription;
    uint16_t add_remove {1};
    uint8_t confirm {'Y'};
    uint8_t history {'Y'};
    do{
        do{
            switch (add_remove)
            {
            case 1:{
                std::cout << "Tell Us Which Product You Want To Add To Your Cart: \n";
                std::cout << "Product Name: ";
                std::cin.ignore();
                std::getline(std::cin,productName);
                std::cout << "Product Description: ";
                std::cin.ignore();
                std::getline(std::cin,productDescription);
                std::cout << "Product Quantity: ";
                std::cin >> productQ;
                productPrice = ((float)(std::rand())*100) / (float)(std::rand());

                Product product(productName,productDescription,productPrice,productQ);

                cart.addProduct(product);
                //add_remove = 0;
                }break;  
            case 2:{
                std::cout << "Tell Us Which Product You Want To Remove From Your Cart: \n";
                std::cout << "Product Name: ";
                std::cin.ignore();
                std::getline(std::cin, productName);
                cart.removeProduct(productName);
                //add_remove = 0;
                }break;
            default:
                break;
            }

            do{
                std::cout << "Hello Again :)\n"
                          << "1-Add More Product To The Cart *-*\n"
                          << "2-Remove Product From The Cart :(\n"
                          << "3-Checkout *0*\n";
                std::cin >> add_remove;
                if((add_remove > 3) && (add_remove < 1)){
                    std::cout << "Invalid Input\n";
                }
            }while((add_remove > 3) && (add_remove < 1));
        }while(add_remove != 3);
        add_remove = 0;
        PaymentProcessor PProcessor(cart.totalPrice(),customer);

        uint16_t userInput;
        Delivery delivery;
        do{
            std::cout << "Choose Delivery Option:\n"
                      << "1-PickUpStation\n"
                      << "2-DoorDelivery\n";
            std::cin >> userInput;
            if(userInput == 1) delivery = Delivery::PickUpStation;
            else if(userInput == 2) delivery = Delivery::DoorDelivery;
            else std::cout << "Invalid Input\n";
        }while((userInput > 2) || (userInput < 1));

        PProcessor.DeliveryType(delivery);

        PayMethodType method;
        do{
            std::cout << "Choose Payment Type:\n"
                      << "1-CashOnDelivery\n"
                      << "2-Fawry\n"
                      << "3-CreditCard\n";
            std::cin >> userInput;
            if(userInput == 1) method = PayMethodType::CashOnDelivery;
            else if(userInput == 2) method = PayMethodType::Fawry;
            else if(userInput == 3) method = PayMethodType::CreditCard;
            else std::cout << "Invalid Input\n";
        }while((userInput > 3) || (userInput < 1));

        PProcessor.payMethod(method);

        PProcessor.orderSummary();

        notification.orderPlaced();
        
        do{
            std::cout<< "Confirm (Y/n) : ";
            std::cin >> confirm;

            if((confirm == 'Y' )||(confirm == 'y')){
                auto pro = cart.Confirm();
                orders.addCartProducts(std::move(pro));
                notification.orderConfirmed();
            }
        }while((confirm != 'Y') && (confirm != 'y') && (confirm != 'N') && (confirm != 'n'));
    }while((confirm == 'n')||(confirm == 'N'));

    std::cout<< "Do you want to review your orders history ;)?(Y/n)\n";
    std::cin >> history;
    if((history == 'Y' )||(history == 'y')){
        orders.orderHistory();
    }
    std::cout<< "Thanks for shipping from our store :)\n";

    notification.orderShipped();
    for(auto i = 0;i < 10000000;i++);
    notification.outForDelivery();
    for(auto i = 0;i < 10000000;i++);
    notification.orderDelivered();
    
    return 0;
}