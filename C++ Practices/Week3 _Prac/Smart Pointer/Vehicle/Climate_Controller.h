/****************************************************
 * Purpose: this file include the Climate_Controller class
*****************************************************/
#ifndef CLIMATE_CONTROLLER_H_
#define CLIMATE_CONTROLLER_H_

#include <iostream>

class Climate_Controller{
    private:

    public:
        ~Climate_Controller() = default;
        virtual void about(); 
};
class Climate_V1:public Climate_Controller{
    private:

    public:
        void about() override{
            std::cout<< "Climate_Controller verion is Climate_V1 \n";
        }
};
#endif