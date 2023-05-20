/****************************************************
Purpose:this code is used for convert the miles to kms(1mile = 1.609 km)
Input: distance in mile (should be numerical)
Output: distance in kilometer (should be numerical)
*****************************************************/
#include <iostream>


using namespace std;

int main(){                            //start of main fun.
    const float KM_PER_MILE = 1.609;   //1.609km in mile. 
    float miles = 0;
    //ask the user to enter the miles distance.
    cout <<"Please enter tue miles distance(ex:**.**): ";
    cin >> miles;

    //comvert the miles to kilometers.
    float km = KM_PER_MILE * miles;

    //Display the distance after convert to kms.
    cout << endl <<"The input miles is " << miles <<endl;
    cout << "The distance in kms is " << km;
    
    return 0;  //Exit the main function.
}