#include <iostream>
#include <array>
constexpr size_t size = 10;

void fillArray(std::array<float,size>& arr){
    auto i = 0;
    for(auto& element : arr){
        element = ++i;
    }
}

int main(){

    std::array<float,size> array;
    fillArray(array);

    std::cout << "the array elements\n";
    for(auto element : array){
        std::cout << element << "\n";
    }


    return EXIT_SUCCESS;
}