#include "LinkedList.hpp"


int main(){
    LinkedList<int> intList;
    intList.frontInsert(5);
    intList.frontInsert(10);
    intList.frontInsert(15);
    intList.remove(10);
    intList.display();
	std::cout << "-------------------------------\n";
    LinkedList<std::string> strList;
    strList.backInsert("Hello");
    strList.backInsert("World");
    strList.backInsert("!");
    strList.remove("World");
    strList.display();
    return 0;
}