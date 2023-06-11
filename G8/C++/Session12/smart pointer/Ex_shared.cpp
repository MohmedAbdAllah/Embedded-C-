#include <iostream>
#include <memory>
void assign(std::shared_ptr<int> p){

}

int main(){
    std::shared_ptr<int> ptr = std::make_shared<int>();
    assign(ptr);
    std::cout << "the number of user: " << ptr.use_count() << "\n";

    *ptr = 20;
    std::cout << "the number of user: " << ptr.use_count() << "\n";
    std::cout << "*ptr: " << *ptr << "\n";

    return 0;
}