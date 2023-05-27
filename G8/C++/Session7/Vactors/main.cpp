#include <iostream>
#include <vector>

//using int_vect = std::vector<int>; //using the same as typedef in C language

int main(){
    std::vector<int> vec;

    std::cout << "the vector size is : " << vec.size() << "\n";
    //add element to vector
	//vec.push_back {10,5,6};
    vec.push_back(10);
    vec.push_back(5);
    vec.push_back(6);

    std::cout << "the vector size is : " << vec.size() << "\n";
    //remove element from vector
    vec.pop_back();
    std::cout << "the vector size is : " << vec.size() << "\n";
    std::cout << "the last element is : " << vec.back() << "\n";
    std::cout << "the first element is : " << vec.front() << "\n";
    std::cout << "the first element using 'at' method is : " << vec.at(0) << "\n";

    return 0;
}