#include <iostream>
//#include <functional>


int main(){
    int var {0};

    auto lambda_sum = [&var](int num1,int num2) {
        var = num1 + num2;
    };

    lambda_sum(2,5);

    std::cout << "var : " << var << "\n";

    return 0;
}