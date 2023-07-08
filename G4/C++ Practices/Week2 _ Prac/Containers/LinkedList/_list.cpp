/*******************************************************
 * Purpose: this file includes some practices on list methods
********************************************************/

#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> _list(10), secList;

    _list.assign({1,2,3});//assign elements 
    _list.assign(2,100);//assign 2 elements with 100s
    secList.assign(_list.begin(),_list.end());//assign first list in the second list.

    for(auto element : secList) cout<< element <<endl;

    return 0;
} 