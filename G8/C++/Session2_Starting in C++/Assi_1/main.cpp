#include <iostream>

int main(){
    //define two variable
    auto num_1 {0u};
    auto num_2 {0u};
    //ask the user to enter two numbers                                       
    std::cout << "please enter to two numbers: ";
    std::cin >> num_1 >> num_2;
    //define variable to hold the result of the operations
    auto result {num_1&num_2};
    std::cout << "the output of '&' operation: "<< result << "\n";

    result = num_1&&num_2;
    std::cout << "the output of '&&' operation: "<< result << "\n";

    result = num_1|num_2;
    std::cout << "the output of '|' operation: "<< result << "\n";

    result = num_1||num_2;
    std::cout << "the output of '||' operation: "<< result << "\n";

    result = num_2<<num_1;
    std::cout << "the output of 'num_2<<num_1' operation: "<< result << "\n";

    result = num_2>>num_1;
    std::cout << "the output of 'num_2>>num_1' operation: "<< result << "\n";

    result = !num_1;
    std::cout << "the output of '!num_1' operation: "<< result << "\n";

    result = num_1^1;
    std::cout << "the output of 'num_1^1' operation: "<< result << "\n";

    result = 1^num_2;
    std::cout << "the output of '1^num_2' operation: "<< result << "\n";

    result = ~num_1;
    std::cout << "the output of '~num_1' operation: "<< result << "\n";

    result = ~num_2;
    std::cout << "the output of '~num_2' operation: "<< result << "\n";
     

    return 0;
}