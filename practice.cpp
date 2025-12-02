#include <iostream>
using namespace std;
class Vehicle{
    public:
    float Speed;
    void speed(){
        cout<<"this Vehicle has speed"<<endl;
    }
};
class Car: public Vehicle{
    public:
    int Seats;
    void seat()
    {cout<<"This Vehicle has seats"<<endl;}

};
class ElectricCar:public Car{
    public:
    float Battery;
    void battery(){
        cout<<"This has battery"<<endl;
    }
};
class Airplane:public Vehicle{
    public :
    void maxspeed(){
         Speed=20.0;
        cout<<"This has max speed: "<<Speed<<endl;
       
    }
};
class FlyingCar: public Car , public Airplane{
       public:

};

int main(){
    FlyingCar f;
    f.maxspeed();
    f.seat();
     
    return 0;

}