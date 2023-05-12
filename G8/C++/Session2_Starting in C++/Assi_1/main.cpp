#include <iostream>

int main(){
    auto num_1 {5};
    auto num_2 {20};

    auto result {num_1&num_2};
    std::cout << "the output of '&' operation: "<< result << std::endl;

    result = num_1&&num_2;
    std::cout << "the output of '&&' operation: "<< result << std::endl;

    result = num_1|num_2;
    std::cout << "the output of '|' operation: "<< result << std::endl;

    result = num_1||num_2;
    std::cout << "the output of '||' operation: "<< result << std::endl;

    result = num_2<<num_1;
    std::cout << "the output of 'num_2<<num_1' operation: "<< result << std::endl;

    result = num_2>>num_1;
    std::cout << "the output of 'num_2>>num_1' operation: "<< result << std::endl;

    result = !num_1;
    std::cout << "the output of '!num_1' operation: "<< result << std::endl;

    result = num_1^1;
    std::cout << "the output of 'num_1^1' operation: "<< result << std::endl;

    result = 1^num_2;
    std::cout << "the output of '1^num_2' operation: "<< result << std::endl;

    result = ~num_1;
    std::cout << "the output of '~num_1' operation: "<< result << std::endl;

    result = ~num_2;
    std::cout << "the output of '~num_2' operation: "<< result << std::endl;
     

    return 0;
}