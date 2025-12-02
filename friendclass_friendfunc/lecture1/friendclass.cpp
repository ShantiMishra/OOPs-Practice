#include <iostream>
using namespace std;
class two;        //Forward Declaration
class one{
     friend class two;
     int a=24;
     public:
     void show(){
        cout<<"This is class one"<<endl;
     }
     
};
class two{
    friend class one;
    public:
    void show2()
      {  cout<<"this isclass two"<<endl;}
    void accessOnePrivate(one &obj){
        cout<<"Accessing data of base class "<<obj.a<<endl;
    }
};
int main(){
    one O1;
    two O2;
    O2.accessOnePrivate(O1);
    return 0;
}