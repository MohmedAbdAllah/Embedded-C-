#include <iostream>


int main(){
    float PI = 3.14;

    auto var_1 {static_cast<int>(PI)};//"auto" at this condition will be better than "int" as we already using static casting
    float var_2 {PI - var_1};

    std::cout << "the PI integer part is: " << var_1 << "\nthe PI float part is : " << var_2 << "\n";


    //const casting
    const float PI_ = 3.14;

    float& nonCons = const_cast<float&>(PI_);

    nonCons = 3.04;

    std::cout << "PI: " << PI_ << "  nonCons: "<< nonCons << "\n";//undefined behavior
    //So it is using mostly when you are trying to send constant variable to function that is not accepting const 

    //reinterpret_cast
    //using to cast the variable to any type without any compiler checking

    char stream[] = "A45C78_";
    void* ptr = static_cast<void*>(stream);

    std::cout << "stream as int: "<< *reinterpret_cast<int*>(ptr) << "\n";
    std::cout << "stream as int: "<< *reinterpret_cast<int*>(ptr) << "\n";


    return 0;
}