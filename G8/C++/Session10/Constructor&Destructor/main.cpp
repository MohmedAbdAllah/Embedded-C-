#include <iostream>
#include <string>

enum OEM : uint8_t 
{
    BWM,
    KIA,
};
enum Color
{
    BLACK,
    RED,
    GREEEN,
    BLUE
};



class Vehicle{
    private:
        std::string m_VIN ;
        OEM m_OEM;
        Color m_Color;
        int * m_CustomData;
    public:
        Vehicle()= default;// =default
        Vehicle(const std::string& vin, const OEM manufacture, const Color color);
        std::string getVehickeData() const;
        ~Vehicle();
};

Vehicle::Vehicle(const std::string& vin, const OEM manufacture, const Color color)
                : m_VIN(vin), m_OEM(manufacture), m_Color(color)
{
    std::cout << "Vehicle Data Successful Defined\n";
    m_CustomData = new int;
}

std::string Vehicle::getVehickeData() const {
    std::string data;
    data = m_VIN + " , " + std::to_string(static_cast<int>(m_OEM)) +" , " + std::to_string(static_cast<int>(m_Color));

    return data; 
}

Vehicle::~Vehicle(){
    std::cout << "Destructor\n";
    delete m_CustomData;
}


int main(){
    Vehicle car1("12222220",OEM::KIA,Color::BLACK);
    std::cout << "the Car 1 data: " << car1.getVehickeData() << "\n";

    return 0;
}