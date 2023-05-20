#include <iostream>

using namespace std;

int main(){
    for(int index = 0;index < 10;index ++){
        if(index%2 == 0)
            cout << "EVEN " << index << endl;
        else
           cout << "ODD " << index << endl; 
    }




    return 0;
}