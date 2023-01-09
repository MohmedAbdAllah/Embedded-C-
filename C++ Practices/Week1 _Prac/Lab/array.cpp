/**************************************************************
 * Purpose: this code is used to explain the using of array
**************************************************************/
#include <iostream>
#include <array>

int main(){

    std::array<int , 3> myIntegers = {1,2,3};
    //myIntegers.fill(0);

    //range base for loop c++11
    for(int& myint : myIntegers){
        //change the value of the array elements
        myint = 1;
        //print the value of myint
        std::cout<< myint << std::endl;
    }


    return 0;
}