/****************************************************
 * Purpose: this file include the Audio_System class
*****************************************************/
#ifndef AUDIO_SYSTEM_H_
#define AUDIO_SYSTEM_H_

#include <iostream>

class Audio_System{
    private:

    public:
        ~Audio_System() = default;
        virtual void about(); 
};
class Audio_V1:public Audio_System{
    private:

    public:
        void about() override{
            std::cout<< "Audio System verion is Audio_V1 \n";
        } 
};
#endif