/***********************************************************************
 * Purpose: this file composition pattern practices that include the graphic 
 *          class with sub classes line, text, rectangle and picture which 
 *          aggregate graphic class
*************************************************************************/

#ifndef GRAPHIC_H_
#define GRAPHIC_H_

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

//template <class T>
class Graphic{
    private:
    public:
        virtual void draw() const = 0;
        virtual void remove(Graphic *g){}
        virtual void add(Graphic *g){}
        virtual void getChild(int){}
        virtual ~Graphic()  {}


};

//template <class T>
class Line : public Graphic{
    private:
    public:
       void draw() const{
            cout<< "draw line()\n";
        } 
};
//template <class T>
class Text : public Graphic{
    private:
    public:
        void draw() const{
            cout<< "draw text()\n";
        }
        

};
//template <class T>
class Rectangle : public Graphic{
    private:
    public:
        void draw() const{
            cout<< "draw rectangle()\n";
        }

};
//template <class T>
class Picture : public Graphic{
    private:
        vector<Graphic *> graph;
    public:
        void draw() const{
            for(auto element : graph){
                element->draw();
            }
        }
        void add(Graphic* element){
            graph.push_back(element);
        }

};

#endif