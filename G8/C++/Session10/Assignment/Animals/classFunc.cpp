#include "header.hpp"

//Here we can find the implementation of the functions which were in the classes "parent and his children" *0* in header.hppcm
Animal::Animal()=default;

Animal::Animal(const std::string& name,  const Type type, const uint16_t age,const std::string& animal)
                :m_Name(name),m_Type(type),m_Age(age),m_Animal(animal)
{
    std::cout << "Successfully identify the animal\n";
}

void Animal::animalData()
{
    std::cout << "Name: " << m_Name
            << ", Type: " << typeList.at(static_cast<int>(m_Type))
            << ", Age: " << m_Age
            << ", Sound: " << soundList.at(static_cast<int>(m_Sound)) <<"\n";
}

void Animal::farm_animals()
{
    for (auto const& [animalName, data] : farmAnimals)
        {
            std::cout << animalName << " -> "<< data << std::endl;
        }
    std::cout << "Total farm animals : " << animalsNumber << "\n";
}

void Animal::add_to_the_farm(Animal animal)
{
    farmAnimals[animal.m_Name] = "Animal:" + animal.m_Animal + ", Type:" + typeList.at(static_cast<int>(animal.m_Type)) + 
                                 ", Age:" + std::to_string(animal.m_Age) + ", Sound:" + soundList.at(static_cast<int>(animal.m_Sound)) +
                                 ", Food:" + foodList.at(static_cast<int>(animal.m_Food)); 
    animalsNumber++;
}

void Animal::remove_from_the_farm(std::string name)
{

    if(farmAnimals.find(name) != farmAnimals.end()){
        farmAnimals.erase(name);
        animalsNumber--;
    }else{
        std::cout << "Can not find this key!\n";
    } 
}

Cow::Cow(const std::string& name,  const Type type, const Food food, const uint16_t age)
            :Animal(name,  type, age,static_cast<std::string>("Cow"))
{
    m_Sound = Sound::Moo;
    m_Food = Food::Grass; 
}

void Cow::animalData()
{
    Animal::animalData();
}
void Cow::moo()
{
    std::cout << "Cow is mooooo!" << "\n";
}

Chicken::Chicken(const std::string& name,  const Type type, const Food food, const uint16_t age)
            :Animal(name,  type, age,static_cast<std::string>("Chicken"))
{
    m_Sound = Sound::Cocks;
    m_Food = Food::Grains;
}

void Chicken::animalData()
{
    Animal::animalData();
}

void Chicken::cocks()
{
    std::cout << "Chicken is  cocks! cocks!" << "\n";
}

Horse::Horse(const std::string& name,  const Type type, const Food food, const uint16_t age)
            :Animal(name,  type, age, static_cast<std::string>("Horse"))
{
    m_Sound = Sound::Neigh;
    m_Food = Food::Hay;
}

void Horse::animalData()
{
    Animal::animalData();
}
void Horse::neigh()
{
    std::cout << "Horse is neighhhhhh!" << "\n";
}