#include <iostream>

class Vehicle{
    private://nothing method out of class can modify it
        std::string m_VIN ;
        std::string m_Color;
        int m_wheelsNumber;
    protected://can be modify by the child
        int m_distance = 0;
        std::string m_name;
    public:
        Vehicle()= default;// =default
        Vehicle(std::string vin, std::string color, int wheelsNumber, std::string name)
                : m_VIN(vin), m_Color(color), m_wheelsNumber(wheelsNumber), m_name(name)
        {
            std::cout << "Vehicle Data Successful Defined\n";
        }
        void printVehicleData(){
            std::cout << "vehicle VIN: " << m_VIN
                      << ", color: " << m_Color
                      << ", name: " << m_name
                      << ", traveled distance: " << m_distance
                      << ", number of wheels: " << m_wheelsNumber << "\n";
        }
        void move(int distance_km)
        {
            m_distance += distance_km;
            std::cout << "The distance is : " << m_distance << " km\n";
        }
        ~Vehicle(){
            std::cout << "Destructor\n";
        }
};

class Car : public Vehicle
{
    private:
        bool m_ACState = false;
    public:
        Car(std::string vin,std::string color)
            :Vehicle(vin, color, 4, "car")
        {
            std::cout << "Car Constructor\n";

        }
        void switchAC(bool state)
        {
            std::cout << "switching AC state to: " << state << "\n";
            m_ACState = state;
        }
        void playInDistance(int newDistance)
        {
            m_distance = newDistance;
        }
};

class Motorcycle : public Vehicle
{
    private:
        bool m_balanced = true;
        void setBalance(bool state)
        {
            m_balanced = state;
        }
    public:
        Motorcycle(std::string vin, std::string color)
                : Vehicle(vin, color, 2, "motorcycle")
        {
            std::cout << "Motorcycle Constructor\n";
        }

        bool isMotorcycleBalanced()
        {
            return m_balanced;
        }

        void printVehicleData()
        {
            Vehicle::printVehicleData();
            std::cout << "balanced state: " << m_balanced << "\n";
        }
};

int main(){
    Vehicle myVehicle = Vehicle("168411111113884", "YellowBlack", 3, "Toktok");
    myVehicle.move(12000);
    myVehicle.printVehicleData();

    Car myCar{"4465584131501", "Red"};
    myCar.move(15);
    myCar.switchAC(true);
    myCar.playInDistance(0);
    myCar.printVehicleData();


    return 0;
}