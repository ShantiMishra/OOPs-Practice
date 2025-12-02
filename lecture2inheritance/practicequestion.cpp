#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"This animal eats"<<endl;
    }
};
class Bird:public Animal{
    public:
    void wings(){
        cout<<"This animal has wings"<<endl;
    }
};
class Mammal:public Animal,public Bird{
    public:
    void bat(){
        cout<<"This animal is mammal and bird as well";
    }
};
int main(){
    Mammal m;
    m.bat();
    return 0;
}
