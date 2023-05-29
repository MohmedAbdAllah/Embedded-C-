#include <iostream>
#include <vector>

int main(){
    std::vector<int> container {1,2,4};

    //we can say that iterator is object from class while pointer is POD "plain old datatype"

    ///////////////container.at(0)/////////containeer.at(3)
    for(auto it = container.begin(); it != container.end();it++){
        std::cout << *it << " ";
    }
    std::cout<<"\n";

    return 0;
}