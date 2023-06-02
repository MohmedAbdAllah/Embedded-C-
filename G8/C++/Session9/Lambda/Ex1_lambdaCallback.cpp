#include <iostream>
#include <functional>

void func(const std::function<void(int,int)> lambda){
    lambda(2,5);// normal function
}

int main(){
    int var {0};

    auto lambda_sum = [&var](int num1,int num2)  -> void {
        var = num1 + num2;
    };

    func(lambda_sum); // this will call lambda_sum

    std::cout << "var : " << var << "\n";

    return 0;
}