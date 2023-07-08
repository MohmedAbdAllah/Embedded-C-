/*****************************************************************************
 * Purpose: this file include some practice code about the composition strategy
*******************************************************************************/
#include "Book_Class.h"

int main(){
    Page p1;
    Page p2;

    Book myCopy;

    myCopy.AddPage(p1);
    myCopy.AddPage(p2);

    p1.addItem(p2);
    myCopy.addItem(p1);

    myCopy.removeItem();
    p2.removeItem();
}

