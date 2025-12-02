#include <iostream>
#include <thread>
using namespace std;

void task(int id){
    for(int i=0; i<5; i++){
        cout<<"Task run by thread " << id << endl;
    }
}



int main(){
    thread t1(task, 1); // thread no 1
    thread t2(task, 2); // thread no 1
     
    // thread will run concurrently

    t1.join();
    t2.join();
}