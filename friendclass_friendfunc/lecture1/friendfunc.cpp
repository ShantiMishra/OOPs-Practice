<<<<<<< HEAD
#include <iostream>
using namespace std;
class two;
class one{
    int value;
    public:
    void input(int data){
        value=data;
    }
    friend void add(one,two);
};
class two{
    int value;
    public:
    void input(int data){
        value = data;
    }
    friend void add(one,two);
};
void  add(one obj1,two obj2){
    cout<<"sum of two from def. of class one and two is "<<obj1.value+obj2.value<<endl;
}


int main(){
    one A;
    two B;
    A.input(20);
    B.input(70);
    add(A,B);
    return 0;
=======
#include <iostream>
using namespace std;
class two;
class one{
    int value;
    public:
    void input(int data){
        value=data;
    }
    friend void add(one,two);
};
class two{
    int value;
    public:
    void input(int data){
        value = data;
    }
    friend void add(one,two);
};
void  add(one obj1,two obj2){
    cout<<"sum of two from def. of class one and two is "<<obj1.value+obj2.value<<endl;
}


int main(){
    one A;
    two B;
    A.input(20);
    B.input(70);
    add(A,B);
    return 0;
>>>>>>> 541d1f9121813072f4deb8691c010d5ae2537063
}