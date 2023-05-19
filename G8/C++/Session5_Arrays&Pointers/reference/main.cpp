#include <iostream>
#include <array>

void fillArray(float array[], int numberOfElments);
void fillArray(std::array<float,4>* myArr);

int main(){
    float num1 = 10;
    float* num1ptr = &num1;//point on num1 addres
    float& num1Ref = num1;// like give the variable another name ,so it can not only declare only . it must be initialize 

    //Using
    //pass array to function
    std::array<float,4> arrCpp;
    fillArray(&arrCpp);
    fillArray(arrCpp);

    return EXIT_SUCCESS;
}

void fillArray(std::array<float,4>* myArr){
    for(auto i = 0; i < myArr->size(); ++i){
        myArr->at(i) = i;
        printf_s("array[%d] = %d",i,i);
    }
}
void fillArray(std::array<float,4>& myArr){
    for(auto i = 0; i < myArr.size(); ++i){
        myArr.at(i) = i;
        printf_s("array[%d] = %d",i,i);
    }
}