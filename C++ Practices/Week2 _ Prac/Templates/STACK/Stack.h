/*****************************************************************
 * Purpose: this header file include stack interface
 * Properties: mCapacity,mElement,mTop
 * Behaviers:push,pop,isFull,isEmpty
*****************************************************************/

#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>
#include <vector>
#pragma once
template <class T>
class Stack
{
    public:
        Stack(int = 10) ;
        ~Stack(){ delete [] stackPtr ; };
        int push(const T&);
        int pop(T&);
        int isFull() const { return top == size - 1 ; } 
        int isEmpty() const { return top == -1 ; }
    private:
	    int size ;  // Number of elements on Stack
	    int top ;  
	    T* stackPtr ; 

};

template class Stack<float>;
//template class Stack<int>;
#endif
