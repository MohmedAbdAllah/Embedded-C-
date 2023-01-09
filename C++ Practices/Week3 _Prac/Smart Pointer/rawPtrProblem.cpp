/**********************************************************************
 * Purpose: this file represent the problem of using raw pointers"specially dynamic memory allocation"
 *          -not delete -> memory leak
 *          -early delete -> dangling pointer
 *          -double delete -> crash program
*/

#include <iostream>
//cpp style
/*
void fun(){
    char *ptr = new char[10];
    delete ptr;
    //dangling pointer
    //some logic
    memcpy(ptr,"string",10);//dangling pointer
}

int main(){
    while(1){
        fun();
    }

    return 0;
}
*/
char * global_fun(){
    char *ptr = (char*)malloc(10*sizeof(char));
    //delete p; dangling pointer
    return ptr;
}

int main(){
    while(1){
        char *p = global_fun();
        p[0] = 'h';
        p[1] = 'e';
        p[2] = 'l';
        p[3] = 'l';
        p[4] = 'o';
        p[5] = '\0';

        printf("%s",p);

        delete p;
        //delete p;//double free
    }
}