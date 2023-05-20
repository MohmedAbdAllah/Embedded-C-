#include <iostream>

using namespace std;

void swap(int& a,int& b){
    int t = a;
    a = b;
    b = t;
}

void selectionSort(int arr[],int size){
    int min_index = 0;
    for(int inc = 0;inc < size-1;inc++){
        //we here used the inc as the index of the minimum number.
        for(int inc1 = inc + 1;inc < size;inc1++){
            //check if wwe have  the index of the minimun number or not 
            if(arr[inc] > arr[inc1]) min_index = inc1;//if not ,we chance it with the index of min. number
        }
        //after we ensure that we have the minimum number, 
        //we swap the minimum number with that number that we assume that it was the min.number 
        swap(arr[inc],arr[min_index]);
    }
}