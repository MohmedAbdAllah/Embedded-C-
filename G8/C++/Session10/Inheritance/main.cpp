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

    public:
        Car(std::string vin,std::string color)
            :Vehicle(vin, color, 4, "car")
        {
            std::cout << "Car Constructor |n";
        }
};

int main(){
    

    return 0;
}