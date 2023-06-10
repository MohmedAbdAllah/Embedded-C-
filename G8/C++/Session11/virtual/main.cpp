#include <iostream>

class base{
    public:
        virtual void display(){//v point & v.table virtual
            std::cout <<"Function of base class"<<std::endl;
        }
        void WhoAmI(){
            std::cout << "I am the base\n";
        }
};

class derived : public base{
    public:
        void display() override {//override keyword is not mandatory 
            std::cout <<"Function of base class"<<std::endl;
        }
        void WhoAmI(){
            std::cout << "I am the dervied\n";
        }
};

int main(){
    base b1 = base();
    b1.display();
    b1.WhoAmI();

    base d0 = derived();
    d0.display();
    d0.WhoAmI();
    
    derived d1;
    d1.display();

    return 0;
}