/*******************************************************
 * Purpose: calculate the circle area
 * Input: reduis
 * Output: circle area
 * Equation: pi * reduis * reduis
********************************************************/
#include <iostream>

using namespace std;

int main(){
    //pi = 22/7
    constexpr float PI = 3.1428;
    //declarate the input redius var.
    float cir_redius = 0.0;
    //ask the user to input the circle redius.
    cout << "Please input the redius: ";
    cin >> cir_redius;

    //declarate the output circle area var.
    float cir_area = cir_redius * cir_redius * PI;

    //Display the area of the circle
    cout << "The circle area is: "<< cir_area << endl;

    return 0;
}