#include <iostream>
using namespace std;
class two;
class one{
    int value;
    public:
    void input(int data){
        value=data;
    }
    friend void multiply(one,two);
};
class two{
    int value;
    public:
    void input(int data){
        value = data;
    }
    friend void multiply(one,two);
};
void  multiply(one obj1,two obj2){
    cout<<"sum of two from def. of class one and two is "<<obj1.value*obj2.value<<endl;
}


int main(){
    one A;
    two B;
    A.input(2);
    B.input(7);
    multiply(A,B);
    return 0;
}