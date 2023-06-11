#include <iostream>

template<typename X,typename Y,typename Z>
X subtract(Y num1,Z num2){
    return num1 - num2;
}


int main(){
    auto result = subtract<double>(12.5F,-5); 
    std::cout << "Result: " << result<< "\n";         

    return 0;
}