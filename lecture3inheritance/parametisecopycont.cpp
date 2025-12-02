#include <iostream>
using namespace std;
class Myclass {
    int age;
    string name;
    public:
    Myclass( int a,string s){
      age=a;
      name=s; 
    }
    Myclass(const Myclass &S){
        age=S.age;
        name=S.name;
        
    }
    void display(){
    cout<<"Age:"<<age<<" Name:"<<name<<endl;
}
};
int main(){
    Myclass m1(19,"Shanti");
   Myclass m2(m1);
      
     m1.display();
     m2.display();
    return 0;
}