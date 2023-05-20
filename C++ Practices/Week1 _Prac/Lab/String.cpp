#include <iostream>
#include <string>

 //using namespace std;

int main(){
    //initialize string variable
    std::string name; //Dynamically allocated
    //ask the user about his name
    std::cout << "what's your name? ";
    std::cin >> name;

    //print the user name
    std::cout << "Hello mr. " << name << std::endl;

    return 0;
}