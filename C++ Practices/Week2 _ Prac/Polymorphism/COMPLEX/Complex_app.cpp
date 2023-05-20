/*****************************************************************
 * Purpose: this code represent how to use the complex class
*****************************************************************/
#include "Complex.h"

int main(){
    Complex C1(12.5,7);
    Complex C2(11.2,5);
    Complex C3 = C1 + C2;
    C3.display();

    return 0;
}