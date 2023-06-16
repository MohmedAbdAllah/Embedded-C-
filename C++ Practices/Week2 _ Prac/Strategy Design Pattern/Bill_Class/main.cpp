/********************************************************************
 * Purpose: this application is used to calculate the bill of electricity, water, and gas
 *          then display the Bill summary and the total bill to the user .
*********************************************************************/
#include "Bill.h"

using namespace std;

int main(){
    TotalBill bill;
    ElectricityBill<float> eBill(200);
    bill.addToBill(&eBill);

    WaterBill<float> wBill(60);
    bill.addToBill(&wBill);

    GasBill<float> gBill(40);
    bill.addToBill(&gBill);

    cout << "The Bill Summary is :\n";
    cout<<  "---------------------\n";

    cout << "Total Bill amount: " << bill.totalBill()<< std::endl;



}