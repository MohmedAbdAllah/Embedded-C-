/***********************************************************************
 * Purpose:this code is used to create the complex class
 * Attributes: float real, flaot img
 * Behaviours: operator+,display
************************************************************************/

#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <iostream>

class Complex{
    private:
        float mReal,mImg;

    public:
        /*********************************************************************
         * Purpose: this function is used to declare the private variable
         * Function_Name:Complex (default constructor)
         * Parameter: float real, float img
        **********************************************************************/
        Complex(float real, float img);
        /*********************************************************************
         * Purpose: this operator is used to add to complex number
         * Function_Name: operator+
         * Parameter: complex const & obj
         * return : complex& result
        **********************************************************************/
       Complex& operator+(Complex const & obj);
       /*********************************************************************
        * Purpose: this function is used to display complex number
        * Function_Name: display
        * Parameter: void
        * return : void
       **********************************************************************/
       void display(void);

};


#endif