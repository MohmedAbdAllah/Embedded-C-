#include "SmartPointer.hpp"
class Test{
    public:
        int m_Test;
};

int main(){
    int *ptr = new int();
    SmartPointer SmartPtr(ptr);

    std::cout << "RawPtr: " << ptr 
              << "\nSmartPtr: " << SmartPtr.get() 
              <<"\n";
    *SmartPtr = 5;
    std::cout << "*SmartPtr: " << *SmartPtr << "\n";
    std::cout << "------------------------------------------\n";
    Test *test = new Test();
    SmartPointer str(test);
    str->m_Test = 9;
    std::cout << "str->m_Test: " << str->m_Test << "\n";


    

    return 0;
}