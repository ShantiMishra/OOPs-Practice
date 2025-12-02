#include <iostream>
using namespace std;
class Parent1{
      public:
      void colour(){
        cout<<"Skin Colour is brown"<< endl;
      }
};
class Parent2{
    public:
    void eyes(){
        cout<<"Eye colour is green"<<endl;
    }
};
class Child: public Parent1 , public Parent2{
    public:
        void result(){
            cout<<"Child looks like both the parents";
        }
};
int main(){
    Child c;
    c.colour();
    c.eyes();
    c.result();
    return 0;
}