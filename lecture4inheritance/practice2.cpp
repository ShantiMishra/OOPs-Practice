#include <iostream>
using namespace std;
class Vehicle{
    public:
    float speed;
    Vehicle(float s){
        speed=s;
    }
};
class Car: public Vehicle{
    public:
    int seats;
    Car(float s,int seatcount):
    Vehicle(s){

    }

};
class ElectricCar:public Car{
    public:
    string battery;
    ElectricCar(float s,int seatcount,string b):Car(s,seatcount){
         battery=b;
    }
};
class Airplane{
    public :
    float maxspeed;
     Airplane(float m){
        maxspeed = m;
     }
};
class FlyingCar: public Car , public Airplane{
       public:
      FlyingCar(float s, int seatcount,float m):Car(s,seatcount),Airplane(m){
         cout<<"Speed is "<<s <<" No.of seats is "<<seatcount <<" Maxmimum Speed is "<<m;
      }
};
int main(){
    FlyingCar f(40,4,50);
   
    return 0;
}