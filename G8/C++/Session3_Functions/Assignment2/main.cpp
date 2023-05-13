#include <iostream>
//functions prototypes
int sum(int ,int);
int divide(int ,int);

int main(){
    int num_1 {} ,num_2 {};

    //ask the user to enter two numbers
    std::cout << "Enter Two integer numbers: ";
    std::cin >> num_1 >> num_2;

    //making the operation of summation and dividation.
    auto sum_result {sum(num_1,num_2)};
    auto divide_result {divide(num_1,num_2)};

    //display the results
    std::cout <<num_1 << " + " << num_2 << " = " << sum_result << "\n";
    std::cout <<num_1 << " / " << num_2 << " = " << divide_result << "\n";

    return 0;
}
//functions implementation

int sum(int num1 ,int num2){
    return num1 + num2;
}
int divide(int num1 ,int num2){
    return num1 / num2;
}