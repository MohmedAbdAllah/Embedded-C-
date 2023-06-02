#include <iostream>

int digit_sum(int num);

int main(){
    //Declare the variables
    unsigned int num {0};
    unsigned int digitSum {0};
    //Get numbers for the user
    std::cout << "Enter the Number: ";
    std::cin >> num;
    //Get the sum of digits
    digitSum = digit_sum(num);
    //display the sum
    std::cout << "The Digit Sum : " << digitSum << "\n";

    return 0;
}
//the digit_sum implementation
int digit_sum(int num){
    int num_ = num;
    int sum {0};

    while(num_ != 0){
        sum += num_%10;
        num_ /= 10;
    }
    return sum;
}
