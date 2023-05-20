/*******************************************************************************************
 * Purpose: this file include the implementation of GasSources class and its inherate classes
********************************************************************************************/
#ifndef GASSTATION_H_
#define GASSTATION_H_

#include <iostream>
#include <memory>

class GasSource{
    public:
        virtual ~GasSource() = default;
        virtual void FuelUp() = 0;
};
class GasStation : public GasSource{
    public:
        void FuelUp() override{
            std::cout<< "Pumping gas at gas station" <<std::endl;
        }
};
class FuelCan : public GasSource{
    public:
        void FuelUp() override{
            std::cout<< "Pumping gas from Fuel Can" <<std::endl;
        }
};
class Car{
    //dependency injection
    //dependency for a source of gas is passsed throught constructor injection
    private:
        std::shared_ptr<GasSource> gasService = nullptr;
    public:
        Car(std::shared_ptr<GasSource> service) : gasService(service){

            if(gasService == nullptr){
                throw std::invalid_argument("service should not equal null");
            }
        }
        void Gasline(){
            std::cout<<"Car needs more gas!" << std::endl;
            gasService->FuelUp();
        }
};

#endif