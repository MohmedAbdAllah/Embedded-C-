/*******************************************************************
 * Purpose: this code is used to transfer the all letter of string to lower case
********************************************************************/
#include <iostream>
#include <string>
#include <algorithm>
//#include <cctype>

int main(){
    std::string str = "My Name is Mohamed Abdallah";//initialize string
    //make lambda that can transfer the string letter to lower case
    auto lambda_lower = [](std::string &sent) {std::transform(sent.begin(),sent.end(),sent.begin(),::tolower);};
    
    //transfer the string to lower case
    lambda_lower(str);

    //display the string after transfer
    std::cout<< str <<std::endl;

    //make lambda that can transfer the string letter to upper case
    auto lambda_upper = [](std::string &sent) {std::transform(sent.begin(),sent.end(),sent.begin(),::toupper);};
    
    //transfer the string to upper case
    lambda_upper(str);

    //display the string after transfer
    std::cout<< str <<std::endl;

    return 0;
}