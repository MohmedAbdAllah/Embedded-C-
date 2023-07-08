/**********************************************************************************
 * Purpose: this file include how to transfer the rvalue to lvalue using referance.
***********************************************************************************/
#include <iostream>

using namespace std;
//this fun is used to represent how work with the right value
int& rvalue(){
    static int value = 10;
    return value;
}
//example of using the right value as a parameter
int& rvalueRef(int&& x){
    return x;
}
int main(){
    
    rvalue() = 40;
    int y = rvalueRef(20);
    cout<< "y = "<< y <<" value = "<< rvalue();

}
