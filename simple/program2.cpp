#include <iostream>
using namespace std;
class Vehicle{
    public:
    string brand="Ford";
    void honk(){
        cout<<"tuut tuut"<<endl;
    }
};
class Car : public Vehicle{
        public:
        string model="Mustang";
       
};

int main(){
    Car C1;
    cout<<C1.brand<<" "<<C1.model<<endl;
    C1.honk();

}