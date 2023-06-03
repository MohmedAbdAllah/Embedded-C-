#include "Ex1_header.hpp"

int main(){
    Manager Man1("Mohamed","Engineer",5000.0,"Software");
    Man1.printData();
    Man1.hireEmployee("mohamed");
    Man1.fireEmployee("mohamed");

    return 0;
}