#include <iostream>
#include <vector>

class calculator{

    //std::vector<int> result;
    //int index;
    private:
        int result;
        int Ans;

    public:
        int num1;
        int num2;

        void add_(){
            //result.push_back(num1 + num2);
            //index++;

            result = num1 + num2;

        }
        void print_(){
            std::cout << "The result : " << result <<"\n";
        }
};

int main(){
    calculator cal;
    cal.num1 =5;
    cal.num2 = 8;

    cal.add_();
    cal.print_();

    return 0;
}