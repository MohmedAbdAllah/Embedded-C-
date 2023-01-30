#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(vector<int> list,int l, int h ,int element){
    if(l <= h){
        int mid = l + (h - l)/2;
        if(list[mid] == element) return mid;
        else if(list[mid] < element) return BinarySearch(list , mid+1,h,element);
        else if(list[mid] > element) return BinarySearch(list , l,mid-1,element);
    }else{
        cout << "the element is not in the list" << endl;
    }
    return -1;
}

int main(){
    vector<int> arr = {1,5,6,10,15,23,25,60,70,79,80,85};
    int Index = BinarySearch(arr,0,arr.size()-1,25);
    cout<<"the element is located in index "<<Index <<endl;
    return 0;
}