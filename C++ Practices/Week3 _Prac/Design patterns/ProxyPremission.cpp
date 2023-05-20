#include <iostream>

using namespace std;

class IBox{
    public:
        virtual ~IBox(){};
        virtual void Open() = 0;
};
class Box : public IBox{
    public:
        void Open(){
            cout<<"Open the Box"<<endl;
        }
};
class PBox : public IBox{
    private:
        string mUser;
        string mPass;
        Box * box;
        bool isAdmin(){
            bool admin = false;
            if((mUser == "mohamed")&&(mPass == "mo1997")){
                admin = true;
            }
            return admin;
        }
    public:
        PBox(string user,string pass):mUser(user),mPass(pass){
            box  = new Box;
        }
        ~PBox(){delete box;}
        void Open(){
            if(isAdmin()){
                box->Open(); 
            }else{
                cout<<"invalid Authentication"<<endl;
            }
        }
};
int main(){
    IBox* box = new PBox("mohamed", "mo1997");
    box->Open();
    delete box;
}
