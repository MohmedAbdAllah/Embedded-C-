#include "Stack.hpp"
#include <iomanip>

int main(){
    Stack<int> intStack;
    intStack.push(5);
    intStack.push(10);
    intStack.push(15);
    intStack.pop();
    int topElement = intStack.top();
    std::cout << "topElement: " << topElement <<"\n"; 
    bool isEmpty = intStack.empty();
    std::cout << std::boolalpha;
    std::cout << "isEmpty: " << isEmpty <<"\n";
    std::cout << "------------------------------------------\n";
    Stack<std::string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    strStack.pop();
    std::string topElementS = strStack.top();
    std::cout << "topElement: " << topElementS <<"\n"; 
    isEmpty = strStack.empty();
    std::cout << std::boolalpha;
    std::cout << "isEmpty: " << isEmpty <<"\n";
    return 0;
}