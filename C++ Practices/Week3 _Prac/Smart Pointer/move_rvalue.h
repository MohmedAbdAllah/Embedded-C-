/*******************************************************************
 * Purpose: this file include the class String and Entity that composed the String class
********************************************************************/

#ifndef MOVE_RVALUE_H_
#define MOVE_RVALUE_H_

#include <iostream>
#include <cstring>

class String{
    private:
        uint32_t mSize;
        char* mData;
    public:
        String(const char* string);
        String(const String& copy);
        String(String&& move);
        ~String();
        void print();

};
class Entity
{
    private:
        String mName;
    public:
        Entity(const String& name);
        Entity(String&& name);
        void printName();
};

#endif