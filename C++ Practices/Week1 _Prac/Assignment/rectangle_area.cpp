/*******************************************************
 * Purpose: calculate the circle area
 * Input: (float) height and width
 * Output: (float) rectangle area
 * Equation: height * width
********************************************************/
#include <iostream>

using namespace std;

int main(){

    //declarate the input width and height var.
    float width = 0.0, height = 0.0;
    //ask the user to input the rectangle height and width.
    cout << "Please input the height and width: ";
    cin >> height >> width;

    //declarate the output rectangle area var.
    float rec_area = height * width;

    //Display the area of the rectangle
    cout << "The circle area is: "<< rec_area << endl;

    return 0;
}