/****************************************************
 * Purpose: this file include the Auto_Parking_MOde class
*****************************************************/
#ifndef AUTO_PARKING_MODE_H_
#define AUTO_PARKINGMODE_H_

#include <iostream>

class Auto_Parking_Mode{
    private:

    public:
        ~Auto_Parking_Mode() = default;
        virtual void about(); 
};
class Parking_V1:public Auto_Parking_Mode{
    private:

    public:
        void about() override{
            std::cout<< "Auto_Parking_Mode verion is Parking_V1 \n";
        } 
};
#endif