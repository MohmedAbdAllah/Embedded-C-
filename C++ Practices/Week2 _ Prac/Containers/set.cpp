/*******************************************************
 * Purpose: this file includes some practices on set methods
********************************************************/
#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main(){
    set<int> myset = {1,100,10,70,100}; //ordered set, and it doesn't allow duplication
    multiset<int> multi_set = {1,100,10,70,100}; //ordered set, and it allows duplication

    cout<<  "Numbers are :";
    for(auto num : multi_set) cout<< num << " , ";
    unordered_set<int> uno_myset = {1,100,10,70,100}; //unordered set, and it doesn't allow duplication
    unordered_multiset<int> uno_multi_set = {1,100,10,70,100}; //unordered set, and it allows duplication
    cout<<  "Numbers are :";
    for(auto num : uno_myset) cout<< num << " , ";
    return 0;
}