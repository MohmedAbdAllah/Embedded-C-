#include <iostream>
#include <functional>
/*****************************Notes**************************
 * in Function , lambda parameters can not have default value ,but in normal function they can
 * 
************************************************************/

int counter {0};

int main(){
    int age = 30;

    //auto lambda_func1 = [](){};
    //std::function<void()> lambda_func2 = [](){};
    //auto lambda_func1 = []()->void{};
    //-----------------------------------------------------

    //auto increment_counter = [](){
    //    //age++; not in lambda scope as [] do not capture anything from main scope
    //    counter++; //right because it is global scope
    //};
    //-----------------------------------------------------

    //auto increment_counter = [&age](){
    //    age++; //captured by capturer [&age]
    //    counter++; //right because it is global scope
    //};
    auto increment_counter = [=](){
        int  x = age; //captured by capturer [age]
        counter++; //right because it is global scope
    };
    //we can capture all variable in main scope by using capturer : [&] by reference or [=] by copy value

    
    
    return 0;
}