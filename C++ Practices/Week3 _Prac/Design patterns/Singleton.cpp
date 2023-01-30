#include <iostream>

using namespace std;

class Singleton{
    private:
        Singleton(){}
        Singleton(const Singleton&);
        const Singleton& operator=(const Singleton&);
        static Singleton* instance;
    public:
        static Singleton* getInstance();
};
Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance(){
    if(!instance){
        instance = new Singleton();
        cout << "First Instance1\n";
        return instance;
    }else{
        cout<<"Previous instance\n";
        return instance;
    }
}

int main(){
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();
    return 0;
}