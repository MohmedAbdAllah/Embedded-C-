/*******************************************************************************
 * Perpose: this code is used to explain the ref .
********************************************************************************/
#include <iostream>
#include <array>
/************************************************************
 * Perpose: this function is used to swap an array with other
 * Function_Name: swap
 * Parameter: two class array
 * return: void
*************************************************************/
void swap_array(std::array<int , 3> &num1, std::array<int , 3> num2){
    for(size_t i = 0; i < num1.size();++i){
        num1[i] = num2[i];
    }
}


int main(){

    std::array<int , 3> num = {2,3,6};//initialize num array
    std::array<int , 3> num1 = {11,12,13};//initialize num array
    //loop in the array
    /*for( int &element : num){
        element += 2;//add 2 on element
        //std::cout << element;
    }
    for( int element : num){
        std::cout << element << std::endl;//print the array 
    }*/
    //swap array with another.
    swap(num,num1);
    for( int element : num){
        std::cout << element << std::endl;//print the array 
    }

    return 0;
}