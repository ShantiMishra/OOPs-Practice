<<<<<<< HEAD
#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"This animal eats"<<endl;
    }
};
class Mammal:public Animal{
    public:
    void walk(){
        cout<<"This animal walk on the land"<<endl;
    }

};
class dog : public Mammal{
    public:
    void bark(){
          cout<<"This animal barks";
    }
   
};
int main(){
    dog d;
    d.eat();
    d.walk();
    d.bark();
    return 0;

=======
#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"This animal eats"<<endl;
    }
};
class Mammal:public Animal{
    public:
    void walk(){
        cout<<"This animal walk on the land"<<endl;
    }

};
class dog : public Mammal{
    public:
    void bark(){
          cout<<"This animal barks";
    }
   
};
int main(){
    dog d;
    d.eat();
    d.walk();
    d.bark();
    return 0;

>>>>>>> 541d1f9121813072f4deb8691c010d5ae2537063
}