#include <iostream>

using namespace std;

void merge(int arr[],int l,int m, int h){
    //calculate the size of right and left part array
    auto const leftPartIndex = m - l + 1;
    auto const rightPartIndex = h - m;
    //create left and right arrays
    auto *leftPartArr = new int[leftPartIndex];
    auto *rightPartArr = new int[rightPartIndex];
    //copy left part
    for(auto i = 0; i < leftPartIndex;i++) leftPartArr[i] = arr[l+i];
    //copy right part
    for(auto i = 0; i < rightPartIndex;i++) rightPartArr[i] = arr[m+1+i];

    auto leftIndex = 0,rightIndex = 0;
    int mainIndex = l;
    while(leftIndex < leftPartIndex  && rightIndex < rightPartIndex){
        if(leftPartArr[leftIndex] <= rightPartArr[rightIndex]){
            arr[mainIndex] = leftPartArr[leftIndex];
            leftIndex++;
        }else{
            arr[mainIndex] = rightPartArr[rightIndex];
            rightIndex++;
        }
        mainIndex++;
    }

    while(leftIndex < leftPartIndex){
        arr[mainIndex] = leftPartArr[leftIndex];
        leftIndex++;
        mainIndex++;
    }
    while(rightIndex < rightPartIndex){
        arr[mainIndex] = rightPartArr[rightIndex];
        rightIndex++;
        mainIndex++;
    }
    delete[] leftPartArr;
    delete[] rightPartArr;
}

void mergeSort(int arr[],int const l,int const h){
    if(l >= h) return;

    auto m = l + (h - l) / 2;
    //spearte the array into two parts
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, h);
    merge(arr, l, m, h);
}