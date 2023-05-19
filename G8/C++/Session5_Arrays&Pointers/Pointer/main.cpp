#include <iostream>

bool assignPtr(void* ptr);                     

int main(){
    //wild pointer
    int* intPtr;
    int intVar = 10;
    std::cout << "Pointer value: " << intPtr << " Variable value: " << intVar << "\n";

    intPtr = &intVar;
    std::cout << "Pointer value: " << intPtr << " Variable value: " << *intPtr << "\n";
    //--------------------------------------------------------
    //null pointer
    int* nullPtr = nullptr;
    bool ptrStatus{assignPtr(nullPtr)};

    if(ptrStatus == true){
        std::cout <<"pointer is assigned successfully\n";
    }else{
        std::cout <<"failed to assign the pointer\n";
    }
    //-------------------------------------------------------
    // generic pointer
    void* GenericPtr = nullptr;


    return 0;
}

bool assignPtr(void* ptr){
    if(ptr != nullptr){
        *((int*)ptr) = 10;
        return true;
    }else{
        return false;
    }
}
