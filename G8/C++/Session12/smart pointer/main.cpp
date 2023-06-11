#include <iostream>
#include <memory>

namespace myStd{
    class SmartPtr{
            int* ptr;
        public:
            SmartPtr(int* p = nullptr){
                ptr = p;
            }

            int& operator*(){
                return *ptr;
            }
            ~SmartPtr(){
                std::cout << "Delete the ptr\n";
                delete (ptr);
            }
    };
}

int main(){
    int* ptr = new int;
    delete ptr;//if take a memory in the space, you are responsible to free this space
    //-----------------------------------------------------------------
    //but here it deleted after the end of main function automatically by calling the destructor "RAII"
    myStd::SmartPtr ptr1(new int(5));

    std::cout << "*ptr1 : " <<*ptr1 << "\n";
    //-----------------------------------------------------------------
    //std::unique_ptr<int> P1 = std::make_unique<int>();         
    auto P1 = std::make_unique<int>();
    *P1 = 5;
    std::cout << "P1: " <<P1.get()<<" - *P1 = " << *P1 << "\n";
    //-----------------------------------------------------------------
    std::shared_ptr<int> P2 = std::make_shared<int>(7);



    
    return 0;
}