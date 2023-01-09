/****************************************************************************
 * Purpose: calculate sum , substraction, divion, multiplation, and reminder.
 * Input: two digits from the user and the operation
 * Output: the result of the operation
******************************************************************************/
#include <iostream>
#include <string>

using namespace std;


    
/****************************************************************************
 * Purpose: calculate sum .
 * Function : add
 * Input: (float,float) two number that the operation will do in it
 * Output: (float) the result of sum
******************************************************************************/
float add(float, float);

/****************************************************************************
 * Purpose: calculate subtraction .
 * Function name: sub
 * Input: (float,float) two number that the operation will do in it
 * Output: (float) the result of subtraction
******************************************************************************/
float sub(float, float);

/****************************************************************************
 * Purpose: calculate divion .
 * Function : div
 * Input: (float,float) two number that the operation will do in it
 * Output: (float) the result of divion
******************************************************************************/
float div(float, float);

/****************************************************************************
 * Purpose: calculate multiplation .
 * Function : multi
 * Input: (float,float) two number that the operation will do in it
 * Output: (float) the result of multiplation
******************************************************************************/
float multi(float, float);

/****************************************************************************
 * Purpose: calculate remainder .
 * Function : remainder
 * Input: (int,int) two number that the operation will do in it
 * Output: (int) the result of remainder
******************************************************************************/
int remainder(int, int);



/****************************************************************************
 * Purpose: calculate sum , substraction, divion, multiplation, and reminder.
 * Function : cal
 * Input: (float,float,char) two number that the operation will do in it and
 *        the operation
 * Output: (float) the result of the arithmatic operation
******************************************************************************/
float cal(float, float, char);

int main(){
    //ask the user to enter the equation
    cout << "Enter the equation: ";
    //declare the variable that will hold the equations
    float num1, num2;
    char op;

    //get read the equation from the user.
    cin >> num1 >> op >> num2;

    //calculate the equation
    float result = cal(num1,num2,op);

    // Display the output
    if(result != '0')cout << "the equation sol.: " << result <<endl;
    else cout << "this operation is not valid";
    
    return 0;
}

float add(float num1, float num2){
    return num1 + num2;
}

float sub(float num1, float num2){
    return num1 - num2;
}

float multi(float num1, float num2){
    return num1 * num2;
}

float div(float num1, float num2){
    return num1 / num2;     
}

int remainder(int num1, int num2){
    return num1 % num2;
}

float cal(float num1, float num2, char op){
    switch(op){
        
        case '+':
                //sum
                return add(num1, num2);
                
                break;
        case '-':
                //subtract
                return sub(num1, num2);
                break;
        case '*':
                //multiply
                return multi(num1, num2);
                break;
        case '/':
                //divion
                return div(num1, num2);
                break;
        case '%':
                //remainder
                return remainder(num1, num2);
                break;
        default: return '0';
    }
}