/***************************************************************
 * Purpose: this file include the implementation of stack class
****************************************************************/
#include "Stack.h"

/*****************************************************
 * Purpose: define the capacity of the stack
 * Constructor: this the parametric constructor of the stack 
 * Parameter: s
*******************************************************/
template <class T>
Stack<T>::Stack(int s)
{
	size = s > 0 && s < 1000 ? s : 10 ;  
	mRear = mFront = -1 ;  // initialize stack
	stackPtr = new T[size] ;
}
/*******************************************************
 * Purpose: this function is used to save a new value in the stack
 * Function_Name: push
 * Parameter: const T& item
 * return: int
********************************************************/
template <class T>
int Stack<T>::push(const T& item)
{
	if (!isFull())
	{
		stackPtr[++top] = item ;
		return 1 ;  // push successful
	}
	return 0 ;  // push unsuccessful
}
/*******************************************************
 * Purpose: this function is used to return last value in the stack
 * Function_Name: pop
 * Parameter: T& popValue
 * return: int
********************************************************/
template <class T> 
int Stack<T>::pop(T& popValue) 
{
	if (!isEmpty())
	{
		popValue = stackPtr[top--] ;
		return 1 ;  // pop successful
	}
	return 0 ;  // pop unsuccessful
}
