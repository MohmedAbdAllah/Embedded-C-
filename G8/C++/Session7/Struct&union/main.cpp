#include <iostream>

struct Fruit{
    double weight;
    double price;
    std::string name;
};

union loginID
{
    std::string email;
    int number;
};


void Buy(Fruit& fruit);

int main(){
    Fruit orange {2.0,7.20,"Orange"};
    Buy(orange);

    return 0;
}

void Buy(Fruit& fruit){
    std::cout << fruit.name <<" " << fruit.weight << " " << fruit.price << "\n";
}