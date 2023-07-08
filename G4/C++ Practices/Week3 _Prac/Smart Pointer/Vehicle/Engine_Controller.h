/*********************************************************************************
 * Purpose: this file include the Engine_Controller class structure and its main types class
**********************************************************************************/
#ifndef ENGINE_CONTROLLER_H_
#define ENGINE_CONTROLLER_H_

#include <iostream>

class Engine_Controller{
    private:

    public:
        virtual ~Engine_Controller() = default;
        virtual void about() = 0;
        void start(){
            std::cout<< "starting the Engine";
        }
        void stop(){
            std::cout<< "stopping the Engine";
        }
        virtual void stop() = 0; 
};

class EngineC4:public Engine_Controller{
    private:

    public:
        void about() override{
            std::cout<< "The Engine includes four cylinders";
        } 
};

class EngineC6:public Engine_Controller{
    private:

    public:
        void about() override{
            std::cout<< "The Engine includes six cylinders";
        } 
};

class EngineC8:public Engine_Controller{
    private:

    public:
        void about() override{
            std::cout<< "The Engine includes eight cylinders";
        }
};

#endif