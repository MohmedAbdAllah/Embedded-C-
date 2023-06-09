while(1){
    
        std::cout << "Do you want to add to the farm or remove animal from it? (a/r)\n";
        std::cin >> add_remove;

        switch(add_remove){
            case 'a':
            {
                std::cout << "Enter animal name: ";
                std::cin >> animalName;

                std::cout << "Enter its properties:\n"
                          << "animal -> (1-Cow,2-Chicken,3-Horse) \n" << "type -> (1-Mammals, 2-Birds)\n"
                          << "food -> (1-Grass, 2-Hay, 3-Grains)\n"
                          << " e.g 1(animal),2(type),1(food),3(age)\n";

                std::getline( std::cin, userInput);
                std::istringstream is(userInput);

                while(is >> num){
                    Inputs.push_back(num);
                }
                uint16_t x;
                std::cout << "Enter animal type:(1-Cow,2-Chicken,3-Horse)\n";
                std::cin >> x;




                switch(x)
                {
                    case 1:
                    {
                        Cow cow{animalName,typeMap[Inputs[1]],foodMap[Inputs[2]],Inputs[3]};
                        farm.add_to_the_farm(cow);

                    }break;
                    case 2:
                    {
                        Chicken chicken{animalName,typeMap[Inputs[1]],foodMap[Inputs[2]],Inputs[3]};
                        farm.add_to_the_farm(chicken);

                    }break;
                    case 3:
                    {
                        Horse horse{animalName,typeMap[Inputs[1]],foodMap[Inputs[2]],Inputs[3]};
                        farm.add_to_the_farm(horse);

                    }break;
                    default:{

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

            }break; 

        }

        std::cout << "The farm animals: \n";
        farm.farm_animals();
                 
    }