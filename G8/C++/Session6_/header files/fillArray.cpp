#include"main.hpp"

void fillArray(std::array<float,4>* myArr){
    for(auto i = 0; i < myArr->size(); ++i){
        myArr->at(i) = i;
        printf("array[%d] = %d",i,i);
    }
}
void fillArray(std::array<float,4>& myArr){
    for(auto i = 0; i < myArr.size(); ++i){
        myArr.at(i) = i;
        printf("array[%d] = %d",i,i);
    }
}
