/********************************************************
 * Purpose: this file used to represent the usage of the shared pointer
********************************************************/

#include <iostream>
#include <memory>

void shareByValue(std::shared_ptr<int> ptr){
    std::cout<< ptr.use_count()<<std::endl;
    *ptr += 5;
    ptr.reset(new int(5));
    std::cout<< *ptr<<std::endl;
}
void shareByref(std::shared_ptr<int>& ptr){
    std::cout<< ptr.use_count()<<std::endl;
    *ptr -= 5;
    std::cout<< *ptr<<std::endl;
}

int main(){
    auto s_ptr = std::make_shared<int>(1900);
    std::shared_ptr<int> s1_ptr(new int(2008));

    std::cout<< s_ptr.use_count()<<std::endl;
    std::cout<< s1_ptr.use_count()<<std::endl;

    s_ptr = s1_ptr;

    std::cout<< s_ptr.use_count()<<std::endl;
    std::cout<< s1_ptr.use_count()<<std::endl;

    shareByValue(s_ptr);
    shareByref(s_ptr);

}