/*******************************************************
 * Purpose: this file includes some practices on list methods
********************************************************/

#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> _list(10), secList;

    _list.assign({1,2,3});
    _list.assign(2,100);
    secList.assign(_list.begin(),_list.end());

    for(auto element : secList) cout<< element <<endl;

    return 0;
}