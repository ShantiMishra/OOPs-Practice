#include <iostream>
using namespace std;
class Cars{
    public:
    void startengine(){
        cout<<"Engine started"<<endl;
    }
};
class Drivers{
    public:
    void drive(Cars &car){
        car.startengine();
        cout<<"car is being drived";
    }
};
int main(){
    Cars mycar;
    Drivers mydrive;
    mydrive.drive(mycar);
    return 0;
}

