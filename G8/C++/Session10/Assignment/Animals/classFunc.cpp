#include "header.hpp"

std::string typeToString(const Type type){
    switch (static_cast<int>(type))
    {
    case 0:
        {
            return "Mammals";
        }break;
    case 1:
        {
            return "Birds";
        }break;
    default:
        return "No valid input";
        break;
    }
}

std::string soundToString(const Sound sound){
    switch (static_cast<int>(sound))
    {
    case 0:
        {
            return "Moo";
        }break;
    case 1:
        {
            return "Neigh";
        }break;
    case 2:
        {
            return "Cocks";
        }break;
    default:
        return "No valid input";
        break;
    }
}

std::string foodToString(const Food food){
    switch (static_cast<int>(food))
    {
    case 0:
        {
            return "Grass";
        }break;
    case 1:
        {
            return "Hay";
        }break;
    case 2:
        {
            return "Grains";
        }break;
    default:
        return "No valid input";
        break;
    }
}

//Here we can find the implementation of the functions which were in the classes "parent and his children" *0* in header.hppcm
Animal::Animal()=default;

Animal::Animal(const Type type, const uint16_t age,const std::string& animal)
                :m_Animal(animal),m_Age(age),m_Type(type)
{
    std::cout << "Successfully identify the animal\n";
}

void Animal::animalData() const
{
    std::cout << "Name: " << m_Name
            << " -> Animal: "<< m_Animal
            << ", Type: " << typeToString(m_Type) 
            << ", Age: " << m_Age
            << ", Sound: " << soundToString(m_Sound)
            << ", Food: " << foodToString(m_Food)<<"\n";
}

Cow::Cow(const Type type, const Food food, const uint16_t age)
            :Animal(type, age,static_cast<std::string>("Cow"))
{
    m_Sound = Sound::Moo;
    m_Food = food; 
}

void Cow::make_sound() 
{
    std::cout << "Cow is mooooo!" << "\n";
}

Chicken::Chicken(const Type type, const Food food, const uint16_t age)
            :Animal(type, age,static_cast<std::string>("Chicken"))
{
    m_Sound = Sound::Cocks;
    m_Food = food;
}

void Chicken::make_sound()
{
    std::cout << "Chicken is  cocks! cocks!" << "\n";
}

Horse::Horse(const Type type, const Food food, const uint16_t age)
            :Animal(type, age, static_cast<std::string>("Horse"))
{
    m_Sound = Sound::Neigh;
    m_Food = food;
}

void Horse::make_sound()
{
    std::cout << "Horse is neighhhhhh!" << "\n";
}

void Farm::add_to_the_farm(const Animal& animal)
{
    farmAnimals[animal.m_Name] = animal; 
    animalsNumber++;
}

void Farm::remove_from_the_farm(const std::string& name)
{

    if(farmAnimals.find(name) != farmAnimals.end()){
        farmAnimals.erase(name);
        animalsNumber--;
    }else{
        std::cout << "Can not find this key!\n";
    } 
}
void Farm::farm_animals() const
{
    for (auto const& [animalName, data] : farmAnimals)
        {
            data.animalData();    
        }
    std::cout << "Total farm animals : " << animalsNumber << "\n";
}