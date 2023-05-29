#include <iostream>

void convertValue(int num){
    auto floatNum {static_cast<float>(num)};
    std::cout << "number as a float: " << floatNum << "\n";

    const int constNum {num};
    auto& nonConstNum = const_cast<int&>(constNum);
    nonConstNum = num + 1;
    std::cout << "the constant modified value: " << nonConstNum << "\n";

    auto ptr {reinterpret_cast<int*>(num)};
    std::cout << "the address that store in a variable after being pointer: " << *ptr << "\n";
}

int main(){
    int num1 {7};

    convertValue(num1);

    return 0;
}