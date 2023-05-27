#include <iostream>
#include <vector>

int vec_sum( std::vector<int> vec_);


int main(){
    //create container of integer elements
    std::vector<int> container {1,7,8,55,12};   // ok

    auto sum = vec_sum(container);
    std::cout << "the sum of the container elements is: " << sum << "\n";

    return 0;
}

int vec_sum( std::vector<int> vec_){
    int sum {0};  // why float?
    for(auto it = vec_.begin(); it != vec_.end();it++){
        sum += *it;
    }
    return sum;
}