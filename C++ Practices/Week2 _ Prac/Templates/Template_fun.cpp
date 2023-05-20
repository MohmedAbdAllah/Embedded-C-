#include <iostream>

template <class M>
M max(M a, M b){
    return a>b?a:b;
}
template <class T> 
void swap(T& x, T& y){
    T temp = x;
    x = y;
    y = temp;
}
int main(){
    int num = 5, num2 = 7;

    swap(num,num2);
    std::cout<< num << " , " << num2 << std::endl;

    std::cout<< "max is " << max(5,3) << std::endl;
    return 0;
}