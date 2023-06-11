#ifndef HEADER_HPP_
#define HEADER_HPP_
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>
//Enum classes used to make the code more simple insteade of using numbers
enum class Type : uint16_t{
    Mammals = 0,
    Birds
};
std::string typeToString(const Type type);

enum class Sound : uint16_t{
    Moo = 0,
    Neigh,
    Cocks
};
std::string soundToString(const Sound sound);

enum class Food : uint16_t{
    Grass = 0,
    Hay,
    Grains
};
//Base class or parent class
class Animal {
    protected:
        std::string m_Animal;
        uint16_t m_Age;
        Type m_Type;
        Sound m_Sound;
        Food m_Food;
          
    public:
        Animal();
        Animal(const Type type, const uint16_t age,const std::string& animal);
        std::string m_Name;
        virtual void make_sound(){};
        void animalData() const;          
};
//derived classes or child class
class Cow : public Animal {    
    public:
        Cow(const Type type, const Food food, const uint16_t age);
        void make_sound() override; 
};

class Chicken : public Animal {
    public:
        Chicken(const Type type, const Food food, const uint16_t age);
        void make_sound() override;     
};
class Horse : public Animal {
    public:
        Horse(const Type type, const Food food, const uint16_t age);
        void make_sound() override;    
};

class Farm{
    public:
        uint16_t animalsNumber = 0;
        std::map<std::string,Animal> farmAnimals;
    public:
        void add_to_the_farm(const Animal& animal);
        void remove_from_the_farm(const std::string& name);
        void farm_animals() const;
        
};
#endif