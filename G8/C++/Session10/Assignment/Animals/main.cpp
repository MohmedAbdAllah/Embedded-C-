#include "header.hpp"

int main(){
    Cow cow_1{"totoo", Type::Mammals, Food::Grass, 2};
    cow_1.animalData();
    cow_1.moo();
    std::cout << "-----------------------------\n";
    Chicken chicken_1{"cocyee", Type::Mammals, Food::Grains, 1};
    chicken_1.animalData();
    chicken_1.cocks();
    std::cout << "-----------------------------\n";
    Horse horse_1{"heheheha", Type::Mammals, Food::Hay, 3};
    horse_1.animalData();
    horse_1. neigh();
    std::cout << "-----------------------------\n";
    Animal farm ;
    farm.add_to_the_farm(cow_1);
    farm.add_to_the_farm(chicken_1);
    farm.add_to_the_farm(horse_1);
    std::cout << "-----------------------------\n";
    farm.farm_animals();
    farm.remove_from_the_farm("totoo");
    farm.remove_from_the_farm("totoo");
    std::cout << "-----------------------------\n";
    farm.farm_animals();
    

    return 0;
}