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
        cout<< "Calculate  the speed of the BMW\n";
    }
};

struct MiniCoper : Speed{
    void calculateSpeed(){
        cout<< "Calculate  the speed of the MiniCoper\n";
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
    Vechicle vehicle1(&bmw);
    Vechicle vehicle2(&minicoper);
    vehicle1.vehicleSpeed();
    vehicle2.vehicleSpeed();
    
    return 0;
} 