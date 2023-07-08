/*******************************************************************
 * Purpose: this program is used to describe the polymorphism classes
*******************************************************************/
#include "Shape.h"
#include <vector>

void draw(std::vector<Shape *> shapes){
    for(auto shape : shapes){
        shape->calculateArea();
        shape->displayArea();
    }
}

int main(){
    std::vector<Shape *> shape;
    Circle circle(4);
    Rectangle rectangle(5,8);
    shape.push_back(&circle);
    shape.push_back(&rectangle);
    draw(shape);
    return 0;
}