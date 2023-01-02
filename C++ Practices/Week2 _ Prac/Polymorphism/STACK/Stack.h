/*****************************************************************
 * Purpose: this header file include stack interface
 * Properties: mCapacity,mElement,mTop
 * Behaviers:push,pop,top,isFull,isEmpty
*****************************************************************/

#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>

class Stack
{
    public:
        ~Stack();
        Stack(int inCapacity);
        void push(double inDouble);
        double top() const;
        double pop();
        bool isFull() const;
        bool isEmpty() const;
    private:
        int mCapacity;
        double * mElements;
        double * mTop;

};

#endif
