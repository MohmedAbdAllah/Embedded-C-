#include <iostream>
#include <stdint.h>

float add(float);

int main(){
    std::cout << "The float number is: ";
    std::cout << add(5.6) << "\n";
    return 0;
}

float add (float a){
    return a;
}