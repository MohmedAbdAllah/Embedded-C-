/*******************************************************************************
 * Perpose: this code is used to explain the different between ref and pointers
********************************************************************************/
#include <iostream>

int main(){
    int x = 5;
    int y = 8;
    //**********************************************************************************
    //NULL pointer
    int* ptr = nullptr; //valid for pointers

    //int& ref; //this is will cause error ,because there is no var. to be alias
    //*************************************************************************************
    //alias of var = another name of var
    int &ref = x;
    //pointer to var
    int *ptr = x;
    //**************************************************************************************
    //pointer to pointer
    int* p0 = &ptr;
    int** p1 = &p0;
    int*** p2 = &p1;
    //ref to ref
    int& ref0 = ref;
    int& ref1 = ref0;
    int& ref2 = ref1;
    //*************************************************************************************** 
    //we can change the address that the pointer point to it ,but we can not change the address that the alias refer to it
    //***************************************************************************************
    //display the address of ref and x
    std::cout << "the address of x:"<< &x << " ,the address of ref:" << &ref <<std::endl;

    return 0;
}