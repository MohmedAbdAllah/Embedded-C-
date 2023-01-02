/*************************************************************
 * Purpose: this application is used to explain the vectors class
**************************************************************/
//include needed headers
#include <iostream>
#include <vector>

/************************************************************
 * Purpose: this function is used to assign values in vector
 * Function_Name: inputVector
 * Parameter: vector reference
 * return: void
*************************************************************/
void inputVector(std::vector<int>& array){
    //ask the user to input 3 value
    std::cout<<"please enter 3 value:\n";
    for(auto &item : array){
        //scan inputs
        std::cin>> item;
    }
}
/************************************************************
 * Purpose: this function is used to display values in vector
 * Function_Name: outputVector
 * Parameter: constant vector reference
 * return: void
*************************************************************/
void outputVector(const std::vector<int>& array){
    for(auto item : array){
        //display elements of vector
        std::cout << item << std::endl;
    }
}


int main(){
    //initialize vector v with size of 3
    std::vector<int> v(3);
    //user insert elements of vectors
    inputVector(v);
    //insert by me
    v.push_back(9);

    //display vector elements -> that will increase the size of vector 
    // that what called memory dynamic allocation
    outputVector(v);

    //display vector size
    std::cout << "vector size is " << v.size() << " and its capacity is " << v.capacity() << std::endl;
    return 0;
}