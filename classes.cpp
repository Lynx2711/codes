#include <iostream>
#include <string>
using namespace std;

class Student{
    public: 
    int age;   //datamembers
    string name;
    int roll_number;
     Student(int rn,int a,string n){
        name = n;
        age = a;
        roll_number = rn;
        cout<<"student1 details: "<< name <<age<<roll_number <<endl;
     }
};

int main(){
    Student stdname(55,6,"Meow");
}
    /*Student student1;       //object of class
    Student student2;
    Student student3;
    student1.name = "Meow";
    student2.name = "Woof";
    student3.name = "Quack";
    
    student1.age = 5;
    student2.age = 6;
    student3.age = 8;

    student1.roll_number = 23;
    student2.roll_number = 34;
    student3.roll_number = 21;

    cout<<"student1 details: "<< student1.name <<student1.roll_number<< student1.age<<endl;
    cout<<"student2 details: "<< student2.name<< student2.roll_number <<student2.age<<endl;
    cout<<"student3 details: "<< student3.name<< student3.roll_number<< student3.age<<endl;
}*/

/*#include <iostream>
using namespace std;

class Room{
    public: 
    int len,breadth,height;
    Room(){
        cout<<"From constructor method";
    }

    int area(){
        return len*breadth*height;
    }
};

int main(){
    Room room1;
    room1.len = 10;
    room1.breadth = 40;
    room1.height = 20;
    cout<<"The area is: "<<room1.area();
}*/