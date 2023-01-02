/*************************************************************************
 * Purpose: this file include the main implementation of shape class
*************************************************************************/

#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <iostream>

class Shape{
    public:
        virtual ~Shape() = default ;
        virtual float calculateArea()=0;
        virtual void displayArea()= 0;
};
class Circle: public Shape{
    private:
        float mRedius;
    public:
        Circle(){}
        Circle(float redius):mRedius(redius){

        }
        void displayArea() override{
            constexpr double PI = 22.0/7.0;
            std::cout<< PI * mRedius * mRedius <<std::endl;
        }
        float calculateArea() override{
            constexpr double PI = 22.0/7.0;
            return PI * mRedius * mRedius;
        }
};

class Rectangle: public Shape{
    private:
        float mHeight;
        float mWidth;
    public:
        Rectangle(){}
        Rectangle(float height,float width):mHeight(height),mWidth(width){

        }
        float calculateArea() override{
            return mHeight * mWidth;
        }
        void displayArea() override{
            std::cout<< mHeight * mWidth <<std::endl;
        }


};


#endif