/********************************************************
 * Purpose : this code is used to swap two element using pointer
 * Input: two references
 * Output: void
*********************************************************/
#include <iostream>

/***************************************************************
 * Purpuse: this function is used to swap two element by reference
 * Function name: swap
 * Parameter: (int*,int*) address of the two elements
 * return: void
*****************************************************************/
void swap(int* e1, int* e2){
    //swap the two variables using its addresses and one var.
    int temp = *e1;
    *e1 = *e2;
    *e2 = temp;
}
 int main(){
    //initialize the variables
    int n1 = 8;
    int n2 = 133;
    //pass the variables addresses to swap functions.
    swap(&n1,&n2);
    //display the outputs.
    std::cout<< "n1 = " << n1 << ", n2 = " << n2 <<std::endl;

    return 0;
 }