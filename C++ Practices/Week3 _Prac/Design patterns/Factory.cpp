#include <iostream>

using namespace std;

class Vehicle{
    public:
        virtual ~Vehicle(){}
         virtual void printVehicle()=0;
         static Vehicle* Create(int type);
};

class FrontTwoWheeler : public Vehicle{
    public:
        void printVehicle(){
            cout<< "Front pushing vehicle"<<endl;
        }
};
class RearTwoWheeler : public Vehicle{
    public:
        void printVehicle(){
            cout<< "Rear pushing vehicle"<<endl;
        }
};
class FourWheeler : public Vehicle{
    public:
        void printVehicle(){
            cout << "Front and Rear pushing vehicle"<<endl;
        }
};
Vehicle* Vehicle::Create(int type){
    if(type == 1) return new FrontTwoWheeler();
    else if(type == 2) return new RearTwoWheeler();
    else if(type == 3) return new FourWheeler();
    else return NULL;
}
class Client{
    private:
        Vehicle* vehicle;
    public:
        Client(int type){
            vehicle->Create(type);
        }
        ~Client() {
            if (vehicle) {
                delete vehicle;
                vehicle = NULL;
            }
        }
        Vehicle* getVehicle()  {
            return vehicle;
        }
};

int main() {

    Client *client = new Client(2);
    Vehicle * pVehicle = client->getVehicle();
    pVehicle->printVehicle();
    delete client;
    return 0;
}