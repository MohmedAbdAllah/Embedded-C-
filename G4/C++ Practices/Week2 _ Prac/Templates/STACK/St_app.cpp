#include "Stack.h"
using namespace std;

int main(){
    Stack<float> fs(5);
    float f = 1.1;
    cout<<"Pushing element onto fs" <<endl;

    fs.push(5.5);
    fs.pop(f);

    cout<< f << endl;

    while(fs.push(f)){
        cout<< f << ' ';
        f += 1.1;
    }
    cout<< endl << "Stack Full." << endl
    << endl << "Popping elements from fs" << endl;

    while(fs.pop(f)){
        cout<< f << ' ';
    }
    cout<< endl << "Sack Empty" << endl;

    return 0;
}