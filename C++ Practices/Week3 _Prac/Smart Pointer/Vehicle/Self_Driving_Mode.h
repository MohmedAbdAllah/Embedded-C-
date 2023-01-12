/****************************************************
 * Purpose: this file include Self_driving_Mode class
*****************************************************/
#ifndef SELF_DRIVING_MODE_H_
#define SELF_DRIVING_MODE_H_

#include <iostream>

class Self_Driving_Mode{
    private:

    public:
        ~Self_Driving_Mode() = default;
        virtual void about(); 
};
class Self_driving_V1:public Self_Driving_Mode{
    private:

    public:
        void about() override{
            std::cout<< "Self_Driving_Mode verion is Self_driving_V1 \n";
        } 
};
#endif