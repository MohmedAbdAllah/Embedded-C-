/********************************************************************
 * Purpose: this application is used to calculate the bill of electricity, water, and gas
 *          then display the Bill summary and the total bill to the user .
*********************************************************************/
#include "Bill.h"
#include <vector>

using namespace std;

int main(){
    vector<Bill*> bill;
    ElectricityBill<float> eBill(200);
    bill.push_back(&eBill);

    WaterBill<float> wBill(60);
    bill.push_back(&wBill);

    GasBill<float> gBill(40);
    bill.push_back(&gBill);

    cout << "The Bill Summary is :\n";
    cout<<  "---------------------\n";

    float total_Bill = 0.0;
    for(auto Bill : bill){
        Bill->displayBill();
        total_Bill += Bill->calculateBill();
    }
    cout << "Total Bill amount: " << total_Bill << std::endl;



}