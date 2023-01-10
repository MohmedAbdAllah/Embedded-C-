/********************************************************************************************************
 * Purpose: this file include the impelmentation of the String class functions and Entity class functions
*********************************************************************************************************/
#include "move_rvalue.h"

String::String(const char* string){
            std::cout<<"Created\n";
            mSize = strlen(string);
            mData = new char[mSize];
            memcpy(mData,string,mSize);
}
String::String(const String& copy){
            std::cout<<"Copied\n";
            this->mSize = copy.mSize;
            this->mData = new char[mSize];
            memcpy(this->mData,copy.mData,mSize); 
}
String::String(String&& move){
            std::cout<<"Moved\n";
            this->mSize = move.mSize;
            this->mData = move.mData;
            move.mSize = 0; 
            move.mData = nullptr; 
}
String::~String(){
            delete mData;
}
void String::print(){
            for(size_t i =0; i < mSize;i++) printf("%c",mData[i]);
            printf("\n");
}
/***************************************************************************
 * Entity Class function implementation
****************************************************************************/
Entity::Entity(const String& name) : mName(name){
            
}
Entity::Entity(String&& name) : mName(static_cast<String&&>(name)){//mName(std::move(name)){

}
void Entity::printName(){
            mName.print();  
}
