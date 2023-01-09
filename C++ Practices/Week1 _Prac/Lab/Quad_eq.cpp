/**************************************************************
 * Purpose: calculate the roots of the quadratic equation
 * Input: the quadratic cofficients
 * Output: roots
 * Equation: (-b (+/-) sqrt(pow(b,2) - 4*a*c))/(2*a)
***************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //ask the user to enter the coff.s'
    cout << "Enter Quadratic coff.: ";
    //declare the variable that will hold the coff.s'
    double a,b,c;
    //read the value from the user
    cin >> a >> b >> c;
    //get the real root
    if((a != 0)&&(pow(b,2)- 4*a*c > 0)){
        double redical = sqrt(pow(b,2)- 4*a*c);

        //calculate the roots
        double root1 = -b + redical;
        double root2 = -b - redical;
        //print the roots
        cout << "Roots:" << root1 << " " << root2 << endl;

    }else{
        cout << "Dose not have two real roots" << endl;
    }

    return 0;
}