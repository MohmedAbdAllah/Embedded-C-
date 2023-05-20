/****************************************************************
 * Purpose: this file include some practice codes in strategy design pattern
*****************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

struct Records
{
    string name;
    string address;

};
/*
template<class T>
void sort(T::iterator& first, T::iterator& second, std::function<T> comp){

}
*/
int main(){
    /*create vector of records*/
    vector<Records> vec(2);
    // pass the data of first record
    vec[0].name = "MohamedAbdallah";
    vec[0].address = "ainshams-cairo";
    // pass the data of secand record
    vec[1].name = "AbdoAbdallah";
    vec[1].address = "alnaam-cairo";

    //used lambda to make two compare sequence

    auto CompareByName = [](const Records& a, const Records& b ) ->bool{return a.name > b.name;};
    auto CompareByAddress = [](const Records& a, const Records& b ) ->bool{return a.address > b.address;};

    //use the sort template function to sort a records using lambda compare
    sort(vec.begin(),vec.end(),CompareByName);

    for(auto vr : vec){
        cout << "vec.name: " <<vr.name <<endl; 
    }

    //use the sort template function to sort a records using lambda compare
    sort(vec.begin(),vec.end(),CompareByAddress);

    for(auto vr : vec){
        cout << "vec.address: " <<vr.address <<endl; 
    }

    return 0;
} 