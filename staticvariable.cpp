#include <iostream>
using namespace std;
class Bank{
    public:
    int  accNumber;
    int balance;
    static int numberofAccounts;  //static members are accessible by class they are  not part of objects

    public:
    Bank(int accNumber, int balance){        //constructor
        this->accNumber = accNumber;
        this->balance = balance;
    }

    void deposit(int amount);     //deposit function

    static int getNumberOfAccounts();   //since it deals with static datat members

};
void Bank::deposit  (int  amount){
    //::scope resolution  operator             function of class Bank
    balance+=amount;
}     
int Bank::numberOfAccounts(){
    return numberOfAccounts;
}           
int main(){
    cout<<Bank::getNumberOfAccounts();
   
}