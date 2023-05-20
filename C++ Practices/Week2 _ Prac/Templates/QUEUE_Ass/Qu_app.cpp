#include "Queue.h"
using namespace std;

int main(){
    Queue<float> fs(5);
    float f = 1.1;
    cout<<"Pushing element onto fs" <<endl;

    fs.enqueue(5.5);
    fs.dequeue(f);

    cout<< f << endl;

    while(fs.enqueue(f)){
        cout<< f << ' ';
        f += 1.1;
    }
    cout<< endl << "Stack Full." << endl
    << endl << "Popping elements from fs" << endl;

    while(fs.dequeue(f)){
        cout<< f << ' ';
    }
    cout<< endl << "Sack Empty" << endl;

    return 0;
}