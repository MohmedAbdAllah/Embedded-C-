/*****************************************************************
 * Purpose: this header file include Queue interface
 * Properties: mQueue,mSize,mFront,mRear
 * Behaviers:push,pop,isFull,isEmpty
*****************************************************************/

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
#pragma once
template <class type>
class Queue
{
    public:
        ~Queue(){ delete [] mQueue ; };
        explicit Queue(int = 10);
        int enqueue(const type& );
        int dequeue(type&);
        int isFull() const {return ((mRear+1) % mSize) == mFront;};
        int isEmpty() const {return (mRear == -1)&&(mFront == -1);};
    private:
        type* mQueue;
        int mSize;
        int mFront;
        int mRear;

};
/***************************************************************
 * Purpose: this file include the implementation of Queue class
****************************************************************/
//#include "Queue.h"
/*****************************************************
 * Purpose: define the capacity of the Queue
 * Constructor: this the parametric constructor of the Queue 
 * Parameter: size
*******************************************************/
template <class type>
Queue<type>::Queue(int size){
    mSize = size > 0 && size < 1000 ? size : 10;
    mFront = mRear = -1;
    mQueue = new type[size] ;
}
/*******************************************************
 * Purpose: this function is used to save a new value in the Queue
 * Function_Name: enqueue
 * Parameter: const type&: item
 * return: int
********************************************************/
template <class type>
int Queue<type>::enqueue(const type& item){
    if (!isFull())
    {
        mRear = (mRear+1) % mSize;
    	mQueue[mRear] =  item;
        if(mFront == -1) mFront++;
    	return 1 ;  // push successful
    }
    return 0 ;  // push unsuccessful
}
/*******************************************************
 * Purpose: this function is used to return last value in the Queue
 * Function_Name: dequeue
 * Parameter: type&: item 
 * return: int
********************************************************/
template <class type>
int Queue<type>::dequeue(type& item){
    if (!isEmpty())
	{
		item = mQueue[mFront] ;
        if(mFront == mRear) mFront = mRear = -1;
        else mFront = (mFront+1)%mSize;
		return 1 ;  // pop successful
	}
	return 0 ;  // pop unsuccessful
}

#endif
