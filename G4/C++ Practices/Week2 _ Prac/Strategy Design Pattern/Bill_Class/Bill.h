/*******************************************************************
 * Purpose:this class is created to calculate the Bills of Water, Gas, Electricity
 * Properties:
 * Behavior:calculateBill, 
********************************************************************/

#ifndef BILL_H_
#define BILL_H_

#include <iostream>
#include <vector>
#pragma once

//template <class type>
class Bill {
    private:
    //protected:
    //    int x = 6;
    public:
        ~Bill(){}
        Bill(){}
        virtual float calculateBill() = 0;
        virtual void displayBill() = 0;
};
template <class type>
class ElectricityBill:public Bill{
    private:
        float mBillamount;
        type mConsumed;
    public:
        ~ElectricityBill(){}
        ElectricityBill(){}
        ElectricityBill(type Consumed):mConsumed(Consumed){} //initializer list
        virtual float calculateBill()override{ 
            if((mConsumed > 0) && (mConsumed <= 100)) mBillamount = mConsumed;
            else if((mConsumed > 100) && (mConsumed <= 200)) mBillamount = ((mConsumed-100) * 1.25) + 100;
            else if((mConsumed > 200) && (mConsumed <= 300)) mBillamount = ((mConsumed-200) * 2) + (100 * 1.25) + 100;
            else if(mConsumed > 300) mBillamount = ((mConsumed-300) * 5) + (100 * 2) + 100 * 1.25 + 100;

            return mBillamount;
        } 
        virtual void displayBill(){
            std::cout << "Electricity Bill amount: " << calculateBill() << std::endl;
            //cout<< x; --> it works normally

        };
};

template <class type>
class WaterBill:public Bill{
    private:
        float mBillamount;
        type mConsumed;
    public:
        ~WaterBill(){}
        WaterBill(type Consumed):mConsumed(Consumed){}
        virtual float calculateBill()override{
            mBillamount = mConsumed * 10;
            return mBillamount;
        }
        virtual void displayBill(){
            std::cout << "Water Bill amount: " << calculateBill() << std::endl;
        };
};

template <class type>
class GasBill:public Bill{
    private:
        float mBillamount;
        type mConsumed;
    public:
        ~GasBill(){}
        GasBill(type Consumed):mConsumed(Consumed){}
        virtual float calculateBill()override{
            mBillamount = mConsumed * 5;
            return mBillamount;
        }
        virtual void displayBill(){
            std::cout << "Gas Bill amount: " << calculateBill() << std::endl;
        };

};

class TotalBill{
    private:
        std::vector<Bill*> m_Bill;
        double mConsumed;
    public:
        TotalBill(){
            mConsumed = 0;
        }
        void addToBill(Bill* _Bill){
            m_Bill.push_back(_Bill);
        }
        auto totalBill() -> decltype(mConsumed) {
            for(auto bill : m_Bill){
                mConsumed += bill->calculateBill();
            }
            return mConsumed;
        }
};

#endif