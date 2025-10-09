#include <iostream>
using namespace std;
class BankAccount{
    int accno ,balance=0;
    string name;
    public:
    BankAccount(string s, int n){
        name=s;
        accno=n;
    }
  void deposit(int d){
    balance=balance + d;
  }
  void withdraw(int w){
    if (balance<w){
        cout<<"Balance is Insufficient"<<endl;
    }
    else
    {balance=balance-w;}
  }
  void displaybalance(){
    cout<<"Balance is "<<balance<<endl;
    cout<<"Account Number is "<<accno<<endl;
    cout<<"Name is "<<name<<endl;
  }
};
int main(){
    BankAccount b1("Shanti",654456);
    b1.deposit(2000);
    b1.displaybalance();
    BankAccount b2("Abhya",56673);
    b2.withdraw(400);
    b2.displaybalance();
    return 0;
}