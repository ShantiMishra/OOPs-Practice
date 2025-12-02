#include <iostream>
using namespace std ; 
// Inline functio declaration
inline int add(int a,int b){
    return a+b;
}
int main(){
    cout<<"sum :"<<add(4,5)<<endl;
}