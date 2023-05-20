#include <iostream>

using namespace std;

class Rectangle{
    public:
        virtual void draw() = 0;
};

class AdapteeRec{
    private:
        int mLength,mWidth;
    public:
        AdapteeRec(int Length,int width):mLength(Length),mWidth(width){
            cout<< "LegacyRectangle:(lenght ,width)" <<endl;
        }
        void oldDraw(){
            cout << "Adaptee Draw"<<endl;
        }
};
class AdapterRec: public Rectangle,private AdapteeRec{
    public:
        AdapterRec(int Length, int Width) : AdapteeRec(Length,Width){
            cout<<"Adapter Rectangle"<<endl;
        }
        void draw() {
        std::cout << "Adapter Draw\n"; 
        oldDraw();
    }
};
int main()
{
  int x = 20, y = 50;
  Rectangle *r = new AdapterRec(x,y);
  r->draw();
}