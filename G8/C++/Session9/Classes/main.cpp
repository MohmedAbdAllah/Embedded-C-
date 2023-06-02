#include <iostream>
#include <string>

class class_name{
    //by default private
    //so if you want something public put it under public keyword
    public:

};
struct struct_name{
    //by default public
    //so if you want something private put it under private keyword
    private:
};

class Person_class{
    //string is a private member
    std::string m_name;
    public:

        void printName(){
            std::cout << "name is : " << m_name << "\n" ;
        }
        void setName(const std::string& name){
            m_name = name;
        }

};

int main(){
    Person_class person1;
    Person_class person2;
    //assign the name
    person1.setName("mohamed");
    person1.setName("Ahmed");
    //print the names

    person1.printName();
    person2.printName();




    return 0;
}