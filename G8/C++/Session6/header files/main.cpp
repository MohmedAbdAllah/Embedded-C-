#include "main.hpp"

int main(){
    float num1 = 10;
    float num2  = static_cast<float>(num1);
    float *num1ptr = &num1;//point on num1 addres
    float& num1Ref = num1;// like give the variable another name ,so it can not only declare only . it must be initialize 

    //Using
    //pass array to function
    std::array<float,4> arrCpp;
    fillArray(&arrCpp);
    fillArray(arrCpp);

    return EXIT_SUCCESS;
}