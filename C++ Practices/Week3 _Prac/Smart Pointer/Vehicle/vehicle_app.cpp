#include "Vehicle.h"
#include <vector>

int main()
{   
    std::vector<Vehicle> BMW[2];

    auto engine_c6 = std::make_unique<EngineC6>();
    auto engine_c8 = std::make_unique<EngineC8>();
    
    return 0;
}