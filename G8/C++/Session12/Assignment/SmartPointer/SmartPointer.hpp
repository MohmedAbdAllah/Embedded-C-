#ifndef SMARTPOINTER_HPP_
#define SMARTPOINTER_HPP_

#include <iostream>
#include <memory>

template<class T>
class SmartPointer{
    private:
        std::shared_ptr<T> ptr;
    public:
        explicit SmartPointer(T* pointer = nullptr){
            ptr = std::make_shared<T>(*pointer);
        }
        T* get() const{
            return ptr.get();
        }
        T& operator*() const{
            return *ptr;
        }
        T* operator->() const{
            return ptr.get();
        }
        ~SmartPointer() = default;

};

#endif