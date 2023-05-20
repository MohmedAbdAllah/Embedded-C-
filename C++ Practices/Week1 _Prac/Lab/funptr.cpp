/***********************************************************
 * Purpose: This is develop to explain the pointer to function
************************************************************/
#include <iostream>

int add(int x,int y){
    return x+y;
}

int main(){
    //pointer to function add
    //int (*fun_ptr)(int,int) = &add;
    //or
    auto fun_ptr = &add;
    //initialize variables
    int x = 5, y = 7;
    //call add fun using ptr to add fun
    int z = fun_ptr(x,y);
    //display return "z"
    std::cout<< z <<std::endl;
}