#include <iostream>
using namespace std;
class Rectangle{
    int length,breath;
    public:
    Rectangle(int l, int b){
        length=l;
        breath=b;
    }
    void area(){
        cout<<"Area is "<<length*breath<<endl;
    }
    void perimeter(){
        cout<<"Perimeter is "<<2*(length*breath)<<endl;
    }
    void square(){
        if(length==breath){
            cout<<"The given rectangle is square"<<endl;
        }
    }
};
int main(){
    Rectangle R1(7,8);
    R1.area();
    R1.perimeter();
    R1.square();
    return 0;

}