#include <iostream>
#include <functional>

 void subscriber(const std::function<void(bool)>& callback_){
    callback_(true);
 }

 //assume that subscriber is in header so you can change value in main function using callback

int main(){
    bool sensorValue = 0;

    auto callback = [&](bool isSensorTriggered) -> void {
        std::cout << "got anew sensor value: " << isSensorTriggered << "\n";
        sensorValue = isSensorTriggered;
    };

    subscriber(callback); 
    
    return 0;
}