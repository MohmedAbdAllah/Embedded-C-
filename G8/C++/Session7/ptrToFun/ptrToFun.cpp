#include <iostream>

using ptrFnc = void (*)(int);

void fun(int a){
    std::cout << "the value is : "<< a << "\n";                 
}

int main(){
    void(*fun_ptr)(int) = &fun;
    //void (*fun_ptr)(int) = fan;

    (*fun_ptr)(10);
    fun_ptr(10);

    return 0;
}