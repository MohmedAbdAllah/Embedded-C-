#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <numeric>
#include <algorithm>
int main(){
    int num;
    std::vector<int> intVec ;
    std::string s;
    
    
    //get the numbers from the user
    std::cout << " Enter some numbers in one line : ";
    std::getline( std::cin, s );
    //streaming integer from a string
    std::istringstream is( s );

    //store the stream of integer in the vector intVec
    while(is >> num){
        intVec.push_back(num);
    }
    
    //display vector elements
    std::cout << "The vector elements is : ";
    for(int inc : intVec){
        std::cout << inc << " ";
    }
    std::cout << "\n";
    //calculate and display the sum of vector elements
    int32_t total_sum = std::reduce(intVec.begin(), intVec.end());
    std::cout << "The summation of vector elements is: "<< total_sum << "\n";

    //calculate and display the average
    auto average = total_sum/static_cast<float>(intVec.size());
    std::cout << "The average of vector elements is: "<< average << "\n";
    
    //get max and min number in vector
    auto it = std::ranges::max_element(std::begin(intVec), std::end(intVec));
    std::cout << "the maximum number is : " << *it << "\n";
    it = std::ranges::min_element(std::begin(intVec), std::end(intVec));
    std::cout << "the minimum number is : " << *it << "\n";
    return 0;
}