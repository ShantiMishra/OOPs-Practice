#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;


int main(){
    
    //declaration and intialization..
    vector <int> a = {1,2,3,4,5};
    a.reserve(100); // capacity of vector fixed .
    cout<< a.size()<<" " << a.capacity() << endl;
    a.push_back(6);   // Capacity of vector doubles on  pushing elements to the vector(dynamic memory allocation)
    cout<< a.size()<<" " << a.capacity() << endl;
    a.emplace_back(7); // Adds element to the same vector (no new vector is created).
    cout<< a.size()<<" " << a.capacity() << endl;

    vector <string> b(10 , "abc") ;
    cout<<b[5] << endl;
    
    // Accessing vector
    for(int i=0;i<a.size() ; i++){
        // cout<< a.at(i)<<" ";    // .at don't give garbage value when there is no  exitence such element.
    }

    // Iterators 
     vector<int>::iterator itr;
     itr = a.begin(); // begin points the starting element ;
     cout<< *itr << endl;
     itr = a.end()-1;    // end()-1 will give the value of last element.
      cout<< *itr << endl;
      
      for(itr=a.begin(); itr<a.end() ; itr++){
        cout<< *itr << " ";
      }
    cout<< endl;


      for(auto &i:a){
        i=i*i;   // changing the value of the elements of a.
      }
     
      for(auto j:a){
        cout<< j << " ";
      }


}