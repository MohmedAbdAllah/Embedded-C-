/*******************************************************************
 * Purpose: this code is used to explain lambda with callback
********************************************************************/
#include <iostream>
#include <vector>
#include <array>
#include <functional>

/**************************************************************************
 * Purpose: this function is used to calculate the square of each number in the array if 
 *          the remainder from divided by 2 is zero ,else calculate the cube
 * Function_Name: calculator
 * Parameter: array class, pointer to square function, pointer to cube function
 * return: void
******************************************************************************/
void Calculator(const std::array<int, 5> arr , std::function<void (int)> calSquare, std::function<void (int)> calCube){

    for(int num : arr){
        if(num % 2 == 0){
            calSquare(num);
        }else{
            calCube(num);
        }
    }
}
/**********************************************************************************
 * Purpose: this function is used to check if there is receive data in commstack
 *  Function_Name: CommStackEvent
 * Parameter: pointer to communication protocal function CommFun
 * return: void
************************************************************************************/
void CommStackEvent(std::function<void (bool)> CommFun){
    bool response = false;
    CommFun(response);
    if(response){
        std::cout<< "NO DATA RECEIVED" <<std::endl;
    }else{
        std::cout<< "DATA RECEIVED" <<std::endl;
    }
}

 int main(){
    //initialize the array
    constexpr size_t size_arr = 5;
    std::array<int,size_arr> arr{1,2,3,4,5};
    //initialize pointer to lambda function that display the square of number
    auto lambda_square = [](int num){std::cout << "the square of "<< num << " is = " << num*num <<std::endl;};
    //initialize pointer to lambda function that display the cube of number
    auto lambda_cube = [](int num){std::cout << "the cube of "<< num << " is = " << num*num*num <<std::endl;};

    Calculator(arr,lambda_square,lambda_cube);

    return 0;
 }