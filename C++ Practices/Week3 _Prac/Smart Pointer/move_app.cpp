/***********************************************************************
 * Purpose: this code is used to represent some application of rvalue
************************************************************************/
#include "move_rvalue.h"

int main(){
    String str("m.abdallah");
    Entity entity1(std::move(str));
    entity1.printName();
    String str1("m.abdallah");
    Entity entity2(str1);
    entity2.printName();
    Entity entity3(String("learning for ever"));//emplace casting
    entity3.printName();


}