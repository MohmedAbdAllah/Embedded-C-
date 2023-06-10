#include <iostream>

class Calculator{
    public:
        Calculator() = default;
        virtual float multi(float num_1,float num_2);
};

class multiCalc : public Calculator{
    public:
        multiCalc() = default;
        float multi(float num_1,float num_2){
            return num_1 * num_2;
        }
};

class addCalc : public Calculator{
    public:
        addCalc() = default;
        float multi(float num_1,float num_2){
            uint16_t result {0};
            for(auto inc = 0; inc < num_1;inc++){
                result += num_2;
            }
            return result;
        }
};

void display(Calculator& ,float ,float );

int main(){
    //Calculator* cal;
    //float result{0.0};
    
    multiCalc multicalc;
    //cal = &multicalc;
    //result = cal->multi(3,4);
    //std::cout << "The result: " << result <<"\n";
    display(multicalc,3,4);

    addCalc addcalc;
    //cal = &addcalc;
    //result = cal->multi(3,4);
    //std::cout << "The result: " << result <<"\n";
    display(addcalc,3,4);
    return 0;
}
void display(Calculator& cal,float num_1,float num_2){
    std::cout << "The result: " << cal.multi(num_1,num_2)
              << "\n";
}