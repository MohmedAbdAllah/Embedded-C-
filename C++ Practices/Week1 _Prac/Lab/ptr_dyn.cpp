/******************************************************
 * this code is used to explain dynamic memory allocation using ptr
******************************************************/
#include <iostream>

using namespace std;

int main(){
    //create pointer and request location with size int in heap
    int* ptr = NULL;
    ptr = new int; 

    if(!ptr){
        cout << "allocat  memory failed \n";
    }else{
        //store 29 in the heap location that the ptr point to it
        *ptr = 29;
        cout << *ptr <<endl;
    }
    //request float space in the heap, make it hold value (3.314) ,and make p0 point to it
    float *p0 = new float (3.314);
    //display the value in p0
    cout <<"the assign value is "<<*p0 <<endl;
    

    //request block of memory in heap
    //size of block
    int n = 5;
   int*  ptr_arr = new int[n];

       if(!ptr_arr){
        cout << "allocat  memory failed \n";
    }else{
        //store pass value in the arr that the ptr point to it
    
        for(int inc = 0; inc < n ;++inc){
            ptr_arr[inc] =inc+1;
        }

         for(int inc = 0; inc < n ;++inc){
            cout << ptr_arr[inc] <<endl;
        }
        
    }

    delete ptr;
    delete[] ptr_arr;
    delete p0;

    return 0;
}