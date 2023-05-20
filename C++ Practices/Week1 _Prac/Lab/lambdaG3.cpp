/*******************************************************************************
 * Perpose: this code is used to explain the using of lambda .
********************************************************************************/
#include <iostream>
#include <array>
#include <algorithm>


int main(){
    std::array<int ,3> sensorData{55,21,13};
    //[&] to capture all by reference that created in main stack to use in lambda 
    //without it we can not use sensorData array
    //[=] to capture all by value
    //[specific element] to capture specific element 
    //or we can specify which we want to capture by ref and which we want to capture by value [&x,=],[&,x],..
    auto lambda_plusTwo = [&](){
                                for(int &element : sensorData){
                                    element += 2;
                                }
                                };
    lambda_plusTwo();
    auto lambda_sort_dir = [](int a,int b)-> bool{
                                return a < b;
                                };
    std::sort(sensorData.begin(),sensorData.end(),lambda_sort_dir);
    
    //std::for_each(sensorData.begin(),sensorData.end(),[](int &element)->void{element+=2;});

    for(int element : sensorData){
        std::cout << element << std::endl;
    }
    return 0;
}