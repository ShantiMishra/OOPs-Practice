#include <iostream>
using namespace std ;
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is vehicle"<<endl;
    }
};
class Fare{
    public:
    Fare(){
        cout<<"This is the fare"<<endl;
    }
};
class Bus:public Vehicle,public Fare{
    public:
    Bus(){
        cout<<"This is the fare of the vehicle bus"<<endl;
    }
};
class Car:public Vehicle{
    public:
    Car(){
        cout<<"This is Car";
    }
};
int main(){
    Bus b;
    Car c;
    return 0;
}