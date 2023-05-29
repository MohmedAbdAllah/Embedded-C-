#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main(){
   int num {0};
    std::vector<int> intVec ;
    std::string s;
    
    
    //get the numbers from the user
    std::cout << "Enter some numbers in one line : ";
    std::getline( std::cin, s );
    //streaming integer from a string
    std::istringstream is( s );

    //store the stream of integer in the vector intVec
    while(is >> num){
        intVec.push_back(num);
    } 
    int index {0};
    bool flag {false};

    do{
        flag = false;
        //cGet index of element from the user
        std::cout << "Enter Elemet Index : ";
        std::cin >> index;
        //checking if the user enter valid index or not
        try{
            //try to display the element that the user chosen
            std::cout << "The element in that index is: " <<intVec.at(index) << "\n";
        }
        catch(const std::exception& exc){
            flag = true;
            std::cerr << "the exception message: " << exc.what() << "\n";

        }
        //do not get out from the loop until get a valid index
    }while(flag);
    

    return 0;
}