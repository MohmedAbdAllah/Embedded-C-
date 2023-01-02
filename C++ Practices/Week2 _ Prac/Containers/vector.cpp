/*******************************************************
 * Purpose: this file includes some practices on vector methods
********************************************************/
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    vector<pair<int,string>> myvec;

    myvec.push_back(make_pair<int,string>(4013,"Mohamed_abdallah"));
    myvec.emplace_back(669,"Michael");

    for(auto element : myvec){
        cout<< element.first << "  "<< element.second<<endl;
    }

    return 0;
}