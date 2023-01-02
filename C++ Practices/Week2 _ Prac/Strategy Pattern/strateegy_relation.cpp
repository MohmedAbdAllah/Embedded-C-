/*********************************************************************************************
 * Purpose: this file include some practice codes in strategy design pattern with reationships
***********************************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Speed
{
    virtual void calculateSpeed()=0;

};

struct BMW : Speed{
    void calculateSpeed(){
        ////////
    }
};

struct MiniCoper : Speed{
    void calculateSpeed(){
        ////////
    }
};
//context
struct Vechicle{
    Speed* strategy;

    Vechicle(Speed* _strategy) : strategy(_strategy){

    }
    void vehicleSpeed(){
        strategy->calculateSpeed();
    }
};


int main(){
    BMW bmw;
    MiniCoper minicoper;
    Vechicle vehicle(&bmw);
    Vechicle vehicle(&minicoper);

    return 0;
} 