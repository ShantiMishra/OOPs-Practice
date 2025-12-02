<<<<<<< HEAD
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
=======
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
>>>>>>> 541d1f9121813072f4deb8691c010d5ae2537063
