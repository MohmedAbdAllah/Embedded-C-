#include "Complex.h"

/*********************************************************************
 * Purpose: this function is used to declare the private variable
 * Function_Name:Complex (default constructor)
 * Parameter: float real, float img
**********************************************************************/
Complex::Complex(float real = 0, float img = 0):mReal(real),mImg(img) {
}
/*********************************************************************
 * Purpose: this operator is used to add to complex number
 * Function_Name: operator+
 * Parameter: complex const & obj
 * return : complex& result
**********************************************************************/
Complex& Complex::operator+(Complex const & obj){
    this->mReal = mReal + obj.mReal;
    this->mImg = mImg + obj.mImg;
    return *this;
}
/*********************************************************************
 * Purpose: this function is used to display complex number
 * Function_Name: display
 * Parameter: void
 * return : void
**********************************************************************/
void Complex::display(void){
    std::cout<< mReal <<" + i"<< mImg <<std::endl;
}
