#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> numbers = {5,2,9,1,7,-5,3,6,-33};

    int searchValue = 7;

    auto it = std::find(numbers.begin(),numbers.end(),searchValue);

    if(it != numbers.end()){
        std::cout << "Found " << searchValue << "at index " << std::distance(numbers.begin(),it) << std::endl;
    }

    std::vector<int> unsortedNumbers = {5,7,8,9,1,2,68,7,6,46,3};

    std::sort(unsortedNumbers.begin(),unsortedNumbers.end(),std::greater<int>());
    // std::sort(unsortedNumbers.begin(),unsortedNumbers.end(),std::less<int>());



    return 0;
}