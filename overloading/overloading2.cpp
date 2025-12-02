<<<<<<< HEAD
#include <iostream>
using namespace std;
class Myclass{
     public: 
     int plusFunc(int x, int y){
      return x+y;
     }
     int plusFunc(int x, int y ,int z){
      return x+y+z;
     }
};
int main(){
   Myclass x1;
   int mynum1= x1.plusFunc(8,5);
   int mynum2=x1.plusFunc(4,6,7);

   cout<< "Int:" << mynum1<< "\n";
   cout<< "Int:" << mynum2<< "\n";
   return 0;
}
=======
#include <iostream>
using namespace std;
class Myclass{
     public: 
     int plusFunc(int x, int y){
      return x+y;
     }
     int plusFunc(int x, int y ,int z){
      return x+y+z;
     }
};
int main(){
   Myclass x1;
   int mynum1= x1.plusFunc(8,5);
   int mynum2=x1.plusFunc(4,6,7);

   cout<< "Int:" << mynum1<< "\n";
   cout<< "Int:" << mynum2<< "\n";
   return 0;
}
>>>>>>> 541d1f9121813072f4deb8691c010d5ae2537063
