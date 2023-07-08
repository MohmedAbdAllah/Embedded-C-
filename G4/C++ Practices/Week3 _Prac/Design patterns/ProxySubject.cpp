#include <iostream>
 using namespace std;

 class Subject{
    public:
        virtual void defineProtocol() = 0;
        virtual void request() = 0;
        virtual ~Subject(){}
 };
 class RealSubject:public Subject{
    public:
        void defineProtocol(){
            cout<< "defined the communication protocol"<< endl;
        }
        void request(){
            cout<< "RealSubject.request()"<<endl;
    }
 };
 class Proxy:public Subject{
    private:
        RealSubject * realSubject;
    public:
        Proxy():realSubject(new RealSubject()){}
        ~Proxy(){delete realSubject;}
        void defineProtocol(){
            realSubject->defineProtocol();
        }
        void request(){
            realSubject->request();
        }
 };

int main(){
    Proxy p;
    p.request();
}