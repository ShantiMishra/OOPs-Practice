#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"This animal eats"<<endl;
    }
};
class Mammal: virtual public Animal{
    public:
    void run (){
        cout<<"Mammal is running"<<endl;
    }
};
class Bird: virtual public Animal{
    public:
    void wings(){
        cout<<"This animal has wings"<<endl;

    }
};
class Bat:public Mammal,public Bird{
    public:
    void bat(){
        cout<<"This animal is mammal and bird as well"<<endl;
    }
};
int main(){
    Bat mybat;
    mybat.bat();
    mybat.run();
    mybat.wings();
    return 0;
}