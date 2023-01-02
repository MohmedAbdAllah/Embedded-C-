/**************************************************************
 * Purpose: this program is used to make vending Machine
 *          -Print welcome massege to the user
 *          -ask the user about what he want (cinema ticket,popcorn,pepsi)
 *          -calculate the total price
 *          -take money
 *          -return the remainder money
 * Input  : - His name, his needs, money
 * Output : -wwlecome message,total price,remainder
***************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

namespace vendingMachine{
    /********************************************************
     * Purpose: this function is used to print welcome vending message
     * Funtion Name:welcomeMassege
     * Parameter: string-> user name
     * return: void 
    **********************************************************/
    void welcomeMassege(string name){
        //display welcome massege
        cout << "welcome mr."<< name <<" *_*"<<endl;
        //display the available items
         cout << "This is the available item right now:"<< endl;
         cout << " -cinema_ticket : 100$\n -popcorn : 10$\n -pepsi : 5$"<< endl;
    }
    /********************************************************
     * Purpose: this function is used to get the price of one item 
     * Funtion Name: order_price
     * Parameter: void
     * return: order price
    **********************************************************/
    uint32_t order_price(void){
        //ask the user about what he need.
         cout << "\nMay we know, which item do you want? :";
        //get the wanted item
         string item;
         cin >> item;

         uint32_t order_price = 0;
         uint32_t num_item = 0;

        //calculate the total price
        if(item =="cinema_ticket"){
            order_price = 100;
        }else if(item == "popcorn"){
            order_price = 10;
        }else if(item=="pepsi"){
            order_price = 5;
        }else{
             cout << "Sorry we don't have this item."<< endl;
        }
        if(order_price != 0){
            //ask this user about how many one he want
            cout << "\nHow many " << item <<" do you want? : ";
            //get the number of user needs from this items
            cin >> num_item;
        }
        return order_price*num_item;
   }
    /********************************************************
     * Purpose: this function is used to get the user needs
     *          and return the total price
     * Funtion Name:price_of_items
     * Parameter: void
     * return: uint_32->total price
    **********************************************************/
    uint32_t price_of_items(void){
         uint32_t total_price = 0;
        char ans;
        do{
            //get user the price of user order
            uint32_t order_price = vendingMachine::order_price();
            total_price += order_price;
            //check if he need something else.
             cout << "\nDo you need something else? (Y/N) : ";
             cin >> ans;
        }while (ans == 'Y');
        return total_price;
   }
    /********************************************************
     * Purpose: this function is used to get the money from the user
     * Funtion Name: get_money
     * Parameter: void
     * return: payment
    **********************************************************/
    uint32_t get_money(void){
        //ask the user to pay the price of items
         cout << "\nPlease enter the money to the machine: ";
         uint32_t payment;
         cin >> payment;

        return payment;
   }
    /********************************************************
     * Purpose: this function is used to calculate the remainder money
     * Funtion Name:remainder
     * Parameter: uint32-> the total price,uint32-> user money
     * return: remainder money
    **********************************************************/
    int32_t remainder( uint32_t total_price, uint32_t user_money){
        return (int32_t)(user_money - total_price);
   }
   /********************************************************
     * Purpose: this function is used to display goodbye vending message
     * Funtion Name:goodbyeMassege
     * Parameter: string-> user name
     * return: void 
    **********************************************************/
    void goodbyeMassege( string name){
        //display welcome massege
         cout << "thank you for using our vending Machine mr."<< name <<" *_*"<< endl;

    }

}

int main(){
        //get the user name
        cout << "Please enter your name: ";
        string name;
        cin >> name;
        
        //display welcome massege
        vendingMachine::welcomeMassege(name);
        //get the price of orders
        uint32_t total_price = vendingMachine::price_of_items();
        //display the total price
        cout << "The total price is "<< total_price << endl;
        //get money for the user
        uint32_t user_payment = vendingMachine::get_money();
        //display the payment money
        cout << "Your payment is "<< user_payment << endl;
        //get the user remainder money
        int32_t remainder = vendingMachine::remainder(total_price,user_payment);
        //display the remainder money
        if(remainder > 0){
            cout << "Your remainder money is "<< remainder << endl;
        }
        else if(remainder < 0){
            cout << "the money you enter is no enough\n Please try again" << endl;
        }
        //display goodbye massege
        vendingMachine::goodbyeMassege(name);
}