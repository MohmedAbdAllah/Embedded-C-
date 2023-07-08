/*******************************************************
 * Purpose: this file includes some practices on  methods
********************************************************/
#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    map<string, int> results;//for unordered map --> mulitmap
    //iterator
    //map<string, int>:: iterator itr; or you can use auto in for loop as i did (>_<)
    results.insert(pair<string,int>("math", 40));
    results.insert(pair<string,int>("arabic", 50));
    results.insert(pair<string,int>("physics", 40));
    results.insert(pair<string,int>("english", 40));

    results["chemistry"] = 45;

    /*for(auto element : results){
        cout<< element.first << "  "<< element.second<<endl;
    }
    for(auto itr = results.begin();itr != results.end();itr++){
        cout<< itr->first << "  "<< itr->second<<endl;
    }*/

    map<string, int> map2(results.begin(),results.end());//assigning using copy constructor
    for(auto itr = map2.begin();itr != map2.end();itr++){
        cout<< itr->first << "  "<< itr->second<<endl;
    }
    cout<<"--------------------------------------"<<endl;
    //remove all what we insert before key arabic
    map2.erase(map2.begin(), map2.find("english"));
    for(auto element : map2){
        cout<< element.first << "  "<< element.second<<endl;
    }
    cout<<"--------------------------------------"<<endl;
    map2.erase("english");
    
    for(auto element : map2){
        cout<< element.first << "  "<< element.second<<endl;
    }
    cout<<"--------------------------------------"<<endl;
    //map.lower_bound(key) , map.upper_bound(key)

    return 0;
}