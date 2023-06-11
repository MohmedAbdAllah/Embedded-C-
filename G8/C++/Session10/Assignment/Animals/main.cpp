#include "header.hpp"

int main(){
    Farm farm ;

    std::map<uint16_t,Type> typeMap;
    typeMap[1] = Type::Mammals;
    typeMap[2] = Type::Birds;
    
    std::map<uint16_t,Food> foodMap;
    foodMap[1] = Food::Grass;
    foodMap[2] = Food::Hay;
    foodMap[3] = Food::Grains;
    
    while(true){{

        uint16_t num {0};
        std::string userInput;
        std::vector<uint16_t> Inputs;
        std::string animalName;

        char add_remove ;
        do{
            std::cout << "Do you want to add to the farm or remove animal from it? (a/r)\n";
            std::cin >> add_remove;
            if((add_remove != 'a') && (add_remove != 'r')){
                    std::cout << "you can only enter a or r\n"
                    "try again\n";
                }
        }while((add_remove != 'a') && (add_remove != 'r'));

        switch(add_remove){
            case 'a':
            {

                std::cout << "Enter animal name: ";
                std::cin >> animalName;

                do{
                    std::cout << "animal -> (1-Cow,2-Chicken,3-Horse): ";
                    std::cin >> num;

                    if((num < 1) || (num > 3)){
                        std::cout << "you can only enter 1, 2 or 3\n"
                        "try again\n";
                    }
                }while((num < 1) || (num > 3));
                Inputs.push_back(num);

                do{ 
                    std::cout << "type -> (1-Mammals, 2-Birds): ";
                    std::cin >> num;
                    if((num < 1) || (num > 2)){
                        std::cout << "you can only enter 1 or 2 \n"
                                     "try again\n";
                    }
                }while((num < 1) || (num > 2));
                Inputs.push_back(num);

                do{
                    std::cout << "food -> (1-Grass, 2-Hay, 3-Grains): ";
                    std::cin >> num;
                    if((num < 1) || (num > 3)){
                        std::cout << "you can only enter 1, 2 or 3\n"
                                     "try again\n";
                    }
                }while((num < 1) || (num > 3));
                Inputs.push_back(num);
                Inputs.push_back(num);

                std::cout << "Age: ";
                std::cin >> num;
                Inputs.push_back(num);

                num = Inputs.at(0);

                switch(num)
                {
                    case 1:
                    {
                        //Cow *cow_1 = &Cow{typeMap[Inputs.at(1)],foodMap[Inputs.at(2)],Inputs.at(3)};
                        auto cow = std::make_shared<Cow>(typeMap[Inputs.at(1)],foodMap[Inputs.at(2)],Inputs.at(3));
                        cow->m_Name = animalName;
                        farm.add_to_the_farm(*cow);

                    }break;
                    case 2:
                    {
                        auto chicken = std::make_shared<Chicken>(typeMap[Inputs.at(1)],foodMap[Inputs.at(2)],Inputs.at(3));
                        chicken->m_Name = animalName;
                        farm.add_to_the_farm(*chicken);

                    }break;
                    case 3:
                    {
                        auto horse = std::make_shared<Horse> (typeMap[Inputs.at(1)],foodMap[Inputs.at(2)],Inputs.at(3));
                        horse->m_Name = animalName;
                        farm.add_to_the_farm(*horse);

                    }break;
                    default:{
                        std::cout <<"you can only enter 1, 2 or 3\n";
                    }break;  
                }
            }break;
            case 'r':
            {
                std::cout << "Enter its name: ";
                std::cin >> animalName;
                farm.remove_from_the_farm(animalName);
            }break;
            default:{
               std::cout << "you can choose between 'a' or 'r' only\n"; 
            }break; 

        }

        std::cout << "The farm animals: \n";
        farm.farm_animals();
                 
    }}
    


    return 0;
}