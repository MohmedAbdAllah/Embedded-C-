/*****************************************************************************
 * Purpose: this header file include the compositiion pattern
******************************************************************************/

#ifndef COMPOSITION_H_
#define COMPOSITION_H_

#include <iostream>

class Component{
    private:
    public:
        virtual void traverse(){}
        virtual void addChild(){}

};

class Leaf: public Component{
    private:
    public:
        void traverse(){};
};

class Composite: public Component{
    private:
        Component comp;
    public:
        void traverse(){};
        void addChild(){}
};


#endif
