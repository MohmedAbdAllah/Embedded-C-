#include <iostream>

class complex {
    private:
        float real;
        float imag;
    public:
        complex(float r = 0, float i=0): real(r),imag(i){

        }

        complex operator+ (const complex& other){
            complex result;
            result.real = this->real + other.real;
            result.imag = this->imag + other.imag;
            return result;
        }

        complex operator+ (float other){
            complex result;
            result.real = this->real + other;
            return result;
        }

        complex operator- (const complex& other){
            complex result;
            result.real = this->real - other.real;
            result.imag = this->imag - other.imag;
            return result;
        }

        complex operator* (const complex& other){
            complex result;
            result.real = (real * other.real) + (imag * other.imag);
            result.imag = real * other.imag;
            return result;
        }

        void display() const{
            std::cout << real << "+ i" <<imag << std::endl;
        }
};


int main(){
    complex c1{12.5,7};
    complex c2{1.5,5};

    //complex c3 = c1.operator+(c2);

    complex c3 = c1 + c2;//alias
    c3.display();

    complex c4 = c1 + 5;//alias
    c4.display();

    complex minus = c1 - c2;
    minus.display();

    complex multi = c1 * c2;
    multi.display();

    return 0;
}