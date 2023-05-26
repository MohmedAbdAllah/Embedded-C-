#include <iostream>
//funtion prototype
void swap(int& num1, int& num2);

int main(){
    int num_1 {0};
    int num_2 {0};

    //Get Integer Numbers from user
    std::cout << "Enter first number: " ;
    std::cin >> num_1;
    std::cout << "Enter second number: " ;
    std::cin >> num_2;

    //Display numbers before swapping
    std::cout << "Before Swapping\n" << 
    "First Integer: " << num_1 << "\n" <<
    "second Integer: " << num_2 << "\n";

    swap(num_1,num_2);

    //Display numbers after swapping
    std::cout << "After Swapping\n" << 
    "First Integer: " << num_1 << "\n" <<
    "second Integer: " << num_2 << "\n";

    return 0;
}

//swap function
void swap(int& num1, int& num2){
    num1 += num2; //ex: num1 = 5 + 2 //num2 = 2
    num2 = num1 - num2; //num2 = 7 - 2 = 5
    num1 -= num2; //num1 = 7 - 5 = 2
}