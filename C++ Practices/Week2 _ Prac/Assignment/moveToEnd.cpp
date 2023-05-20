/********************************************************************
 * Purpose: this file include code that move all values that equal to
 *          specific value to the end of vector.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//using algorithms
void moveToEnd(vector<int>& vec , const int moveValue){
    for(size_t inc = 0 ;inc < vec.size();inc++){
        if(vec[inc] == moveValue)
            //move element to the end
            rotate(vec.begin()+inc, vec.begin() + inc+1, vec.end());
    }
}

int main() {
    //Fill vector
    vector<int> vec {1,2,3,2,10,9,2,27,30,17,8,9};
    int moveValue = 2;
    //move elements vector that equal to moveValue to the end
    moveToEnd(vec,moveValue);
    
    //print content
    for (auto e:vec) {
        cout << e << std::endl;
    }
}

/*OR

vector<int> moveToEnd(vector<int> vec , const int moveValue){
    vector<int> new_vec(vec.size());
    int firstElement = -1, lastElement = vec.size();
    for(size_t inc = 0 ;inc < vec.size();inc++){
        if(vec[inc] == moveValue){
            //move element to the end
            lastElement--;
            new_vec[lastElement] = vec[inc];
        }else{
            firstElement++;
            new_vec[firstElement] = vec[inc];
        }
    }
    return new_vec;
}

int main() {
    //Fill vector
    vector<int> vec {1,2,3,2,10,9,2,27,30,17,8,9};
    int moveValue = 2;
    //move elements vector that equal to moveValue to the end
    vec = moveToEnd(vec,moveValue);
    
    //print content
    for (auto e:vec) {
        cout << e << std::endl;
    }
}*/

