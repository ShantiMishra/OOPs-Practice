#include <iostream>
using namespace std;
class bankaccount{

    int accountnumber;
    int balance;
    public :
    bankaccount(int acc,int bal){
        accountnumber=acc;
        balance=bal;
    }

    bankaccount(const bankaccount &obj){
        balance = obj.balance;
        accountnumber=obj.accountnumber;
    }

    void add_balance(int amt){
        balance+=amt;
    }
    void show(){
      cout<<"account number:"<<accountnumber<<endl;
      cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    bankaccount b(246241297,90000);
    b.add_balance(500);
    bankaccount b2=b;
    b.show();
    b2.add_balance(600);
    b2.show();
}