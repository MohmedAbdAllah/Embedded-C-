/*****************************************************
 * Purpose: this file include gas application which 
 *          represent the using of gas station class
******************************************************/

#include "GasStation.h"

int main(){
    std::shared_ptr<GasSource> station(new GasStation());
    Car carS(station);
    carS.Gasline();
    std::shared_ptr<GasSource> fuelCan (new FuelCan());
    Car carF(fuelCan);
    carF.Gasline();

}