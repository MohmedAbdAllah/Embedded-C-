/***************************************************************
 * Purpose: this file include the implementation of stack class
****************************************************************/
#include "Stack.h"
/***************************************************
 * Purpose: Class destroy used to free the memory
****************************************************/
Stack::~Stack(){
    if(mElements != nullptr){
        delete[] mElements;
        mElements = nullptr;
    }   
}
/*****************************************************
 * Purpose: define the capacity of the stack
 * Constructor: this the parametric constructor of the stack 
 * Parameter: inCapactiy
*******************************************************/
Stack::Stack(int inCapacity){
    mCapacity = inCapacity;
    mElements = new double [mCapacity];
    mTop = mElements;
}
/*******************************************************
 * Purpose: this function is used to save a new value in the stack
 * Function_Name: push
 * Parameter: double: inDouble
 * return: void
********************************************************/
void Stack::push(double inDouble){
    if(! isFull()){
        *mTop = inDouble;
        mTop++;
    }
}
/*******************************************************
 * Purpose: this function is used to return last value in the stack
 * Function_Name: push
 * Parameter: double: inDouble
 * return: void
********************************************************/
double Stack::pop(){
    if(! isEmpty()){
        mTop--;
        double outDouble = *mTop;
        return outDouble;
    }else{
        return '\0';
    }
}
/*******************************************************
 * Purpose: this function is used to return 0 if the stack is full 
 * Function_Name: isFull
 * Parameter: void
 * return: bool
********************************************************/
bool Stack::isFull() const{
    if(mTop  == (mElements + mCapacity)){
        return 0;
    }else{
        return 1;
    }
}
/*******************************************************
 * Purpose: this function is used to return 0 if the stack is Empty
 * Function_Name: isEmpty
 * Parameter: void
 * return: bool
********************************************************/
bool Stack::isEmpty() const{
    if(mTop  == mElements){
        return 0;
    }else{
        return 1;
    }
}
/*********************************************************************************
 * Purpose: this function is used to return address of the last value in the stack
 * Function_Name: top
 * Parameter: void
 * return: double
***********************************************************************************/
double Stack::top() const{
    if(! isEmpty()){
        double outDouble = *mTop;
        return outDouble;
    }else{
        return '\0';
    }
}

int main(){return 0;}