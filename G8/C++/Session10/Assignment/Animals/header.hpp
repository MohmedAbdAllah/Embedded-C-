
#ifndef HEADER_HPP_
#define HEADER_HPP_
#include <iostream>
#include <string>
#include <vector>
#include <map>
//Enum classes used to make the code more simple insteade of using numbers
enum class Type{
    Mammals = 0,
    Birds
};
enum class Sound{
    Moo = 0,
    Neigh,
    Cocks
};
enum class Food{
    Grass = 0,
    Hay,
    Grains
};
//Base class or parent class
class Animal {
    private:
        std::vector<std::string> typeList= {"Mammals","Birds"};
        std::vector<std::string> soundList= {"Moo","Neigh","Cocks"};
        std::vector<std::string> foodList= {"Grass","Hay","Grains"};
        uint16_t animalsNumber = 0;
        std::map<std::string,std::string> farmAnimals;
    protected:
        std::string m_Name;
        std::string m_Animal;
        uint16_t m_Age;
        Type m_Type;
        Sound m_Sound;
        Food m_Food;
        
        void animalData();
    public:
        Animal();
        Animal(const std::string& name,  const Type type, const uint16_t age,const std::string& animal);
        void farm_animals();
        void add_to_the_farm(Animal animal);
        void remove_from_the_farm(std::string name);       
};
//derived classes or child class
class Cow : public Animal {    
    public:
        Cow(const std::string& name,  const Type type, const Food food, const uint16_t age);
        void animalData();
        void moo();
        void add_to_the_farm(Animal animal){}
        void remove_from_the_farm(std::string name){}
  
};

class Chicken : public Animal {
    public:
        Chicken(const std::string& name,  const Type type, const Food food, const uint16_t age);
        void animalData();
        void cocks();
        void add_to_the_farm(Animal animal){}
        void remove_from_the_farm(std::string name){}
            
};
class Horse : public Animal {
    public:
        Horse(const std::string& name,  const Type type, const Food food, const uint16_t age);
        void animalData();
        void neigh();
        void add_to_the_farm(Animal animal){}
        void remove_from_the_farm(std::string name){}    
};


#endif