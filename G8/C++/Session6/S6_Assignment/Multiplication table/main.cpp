#include <iostream>
//
void multi_table(int num ,int limit);

int main(){
    //initialize the variables
    int num {0};
    int limit {0};
    //Get numbers from users
    std::cout << "Enter Number: ";
    std::cin >> num;

    std::cout << "Enter Limit: ";
    std::cin >> limit;
    //display multiplication table
    multi_table(num ,limit);

    return 0;
}
//multiplication table funcation
void multi_table(int num ,int limit){
    for(auto inc = 1; inc <= limit; inc++){
        printf("%d x %d = %d \n", num, inc, num * inc);
    }
}