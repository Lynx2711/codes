#include <iostream>
using namespace std;
/*class ClassB;             //forward declaration 
class ClassA{
    private:
    int numA;

    public:
    classA(){       //constructor   ie.  a method
        this->numA = 5;
    }
    friend int add(ClassA,ClassB);   to make a class friend:syntax is    friend class ClassB
};

class ClassB{
    private:
    int numB;
    public:
    classB(){                     
        this->numB = 10;
    }
    friend int add(ClassA,ClassB);  //method signature
};

int add(ClassA objA, ClassB objB){
    return objA.numA + objB.numB;
}

int main(){

}*/

class ClassA{
    private:
    int numA;

    public:
    ClassA(){
        this->numA = 10;
    }
    friend class classB;
};

class ClassB{
    private:
    int numB;

    public:
    ClassB(){
        this->numB = 20;
    }
    int add(){
        ClassA objA;
        return objA.numA + numB;
    }
};

int main(){}

