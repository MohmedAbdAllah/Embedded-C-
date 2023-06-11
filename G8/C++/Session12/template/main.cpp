#include <iostream>

//template must be define in the same header it was declared
//the compiler will use

template<class T1,class T2>
auto add(T1 num1, T2 num2) -> decltype(num1+num2) //will generate the return type 
{
    return num1 + num1;
}
int main(){
    int num1 = 5;
    int num2 = 9;
    //auto result = add(num1,num2);
    auto result = add(num1,num2);

    std::cout << "The result : " << result << "\n";

    return 0;
}