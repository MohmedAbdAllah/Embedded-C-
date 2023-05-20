/*********************************************************************************
 * Purpose: this file include the vehicle class structure and its main types class
**********************************************************************************/
#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>
#include "Engine_Controller.h"
#include "Audio_System.h"
#include "Climate_Controller.h"
#include "Auto_Parking_Mode.h"
#include "Self_Driving_Mode.h"
#include <memory>

class Vehicle{
    private:
        std::shared_ptr<Engine_Controller> Engine;
    public:
        Vehicle(){}
        virtual ~Vehicle() = default;
        virtual void about() = 0;
        void start(){
            Engine->start();
        }
        void stop(){
            Engine->stop();
        }
 
};

class Compact:public Vehicle{
    private:
        std::unique_ptr<Engine_Controller> cEngine;
        std::unique_ptr<Audio_System>   cAudio;
        std::unique_ptr<Climate_Controller> cClimate;

    public:
        Compact(std::unique_ptr<Engine_Controller>&& Engine, std::unique_ptr<Audio_System>&& Audio,\
             std::unique_ptr<Climate_Controller>&& Climate):cEngine(std::move(Engine)),cAudio(std::move(Audio)),cClimate(std::move(Climate)){
             }
        void about() override{
            std::cout<<"this vehicle includes:\n";
            cEngine->about();
            cAudio->about();
            cClimate->about();
        }
 
};

class Middle:public Vehicle{
    private:
        std::unique_ptr<Engine_Controller> mEngine;
        std::unique_ptr<Audio_System>   mAudio;
        std::unique_ptr<Climate_Controller> mClimate;
        std::unique_ptr<Auto_Parking_Mode> mParking;
    public:
        Middle(std::unique_ptr<Engine_Controller>&& Engine, std::unique_ptr<Audio_System>&& Audio,\
             std::unique_ptr<Climate_Controller>&& Climate,std::unique_ptr<Auto_Parking_Mode>&& Parking)\
             :mEngine(std::move(Engine)),mAudio(std::move(Audio)),mClimate(std::move(Climate)),mParking(std::move(Parking)){
             }
        void about() override{
            std::cout<<"this vehicle includes:\n";
            mEngine->about();
            mAudio->about();
            mClimate->about();
            mParking->about();
        }
};

class Luxury:public Vehicle{
    private:
        std::unique_ptr<Engine_Controller> lEngine;
        std::unique_ptr<Audio_System>   lAudio;
        std::unique_ptr<Climate_Controller> lClimate;
        std::unique_ptr<Auto_Parking_Mode> lParking;
        std::unique_ptr<Self_Driving_Mode> lSelf_Driving;
    public:
        Luxury(std::unique_ptr<Engine_Controller>&& Engine, std::unique_ptr<Audio_System>&& Audio,\
             std::unique_ptr<Climate_Controller>&& Climate,std::unique_ptr<Auto_Parking_Mode>&& Parking,\
             std::unique_ptr<Self_Driving_Mode>&& Self_Driving)\
             :lEngine(std::move(Engine)),lAudio(std::move(Audio)),lClimate(std::move(Climate)),lParking(std::move(Parking)),\
             lSelf_Driving(std::move(Self_Driving)){
             }
        void about() override{
            std::cout<<"this vehicle includes:\n";
            lEngine->about();
            lAudio->about();
            lClimate->about();
            lParking->about();
            lSelf_Driving->about();
        }
};

#endif
