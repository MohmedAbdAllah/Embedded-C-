/**************************************************************
 * Purpose: this header file include the implementation of the book
 *          class, and the page class which inherited from the mainObject
 *          class and book class composited it "mainObject"
***********************************************************************/

#ifndef BOOK_CLASS_H_
#define BOOK_CLASS_H_

#include <iostream>
#include <vector>

using namespace std;

class mainObject {
    public:
        virtual void addItem(mainObject a){ }
        virtual void removeItem(){ }
        virtual void deleteItem(mainObject a){ }
};

class Page : public mainObject {
    public:
        void addItem(mainObject line){
            cout << "Item added into the page" << endl;
        }
        void removeItem(){
            cout << "Item Removed from the page" << endl;
        }
        void deleteItem(mainObject line){
            cout << "Item Deleted from the page" << endl;
        }

};
class Book : public mainObject {
    vector<mainObject> Pages;
    public:
        void AddPage(mainObject Page){
            Pages.push_back(Page);
        }
        void addItem(mainObject Page){
            cout<< "Item added to the book" << endl;
        }
        void removeItem(){
            cout<< "Item removed from the book" << endl;
        }
        void deleteItem(mainObject Page){
            cout<< "Item delete from the book" << endl;
        }
};


#endif