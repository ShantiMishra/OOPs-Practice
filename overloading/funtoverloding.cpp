// Funtion overloading

#include <iostream>
using namespace std;
class Myclass{
     public: 
     int plusFunc(int x, int y){
      return x+y;
     }
     double plusFunc(double x, double y){
      return x+y;
     }
};
int main(){
   Myclass x1;
   int mynum1= x1.plusFunc(8,5);
   double mynum2=x1.plusFunc(4.3,6.26);

   cout<< "Int:" << mynum1<< "\n";
   cout<< "Double:" << mynum2<< "\n";
   return 0;
}
