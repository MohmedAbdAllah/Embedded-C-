/**************************************************************
 * Purpose: this file represent how to create the smart pointers
*****************************************************************/
#include <iostream>


namespace _std{
    template<class T>
    class SmartPtr{
            T* ptr;
        public:
            explicit SmartPtr(T* p = nullptr):ptr(p){}
            //Destructor
            ~SmartPtr(){delete (ptr);}
            // Overloading dereferencing operator
            T& operator*(){
                return *ptr;
            }
        
    };
}

int main(){
    _std::SmartPtr ptr(new char);//address : value
    *ptr = 48;
    printf("%c",*ptr);
 
}