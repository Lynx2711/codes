//student s1;  -> static memory
// Student *s1 = new Student();    ->heap memory

//pillars of oop" inheritance,polymorphism,encapsulation,abstraction

/*
1) encapsulation :encapsulation helps create loosely coupled coding: ie minimal interaction between modules, increased security since modules cannot affect other module

in short  process of wrapping similar code in one place
*/

/*#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;

    /*Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    int getArea(){
        return length* breadth;
    }*/

   /* public:
    //setters
    void setLength(int l){   //gives restricted access to sensitive datas
        length = l;
    }

    void setBreadth(int b){
        breadth = b;
    }

    //getters
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};

int main(){
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(20);
    cout<<"length : "<<r1.getLength();
    cout<<"breadth: "<<r1.getBreadth();
}*/

#include <iostream>
using namespace std;

class BankAccoutn{
    private:
    int balance;

    public:
    void deposit(int amount){
        if(amount>0) balance+=amount;
    }
    void withdraw(int amount){
        if(amount>0 && amount<=balance) balance-=amounut;
    }
    int getBalance(){
        return balance;
    }
}

int main(){
    BankAccount b1;
    b1.deposit(100);
    b1.withdraw(50);
    cout<<b1.getBalance();
}