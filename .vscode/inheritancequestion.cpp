/*Background:
You have been tasked with developing a wildlife management system for a vast jungle that hosts different types of animals, including Mammals, Birds, and Reptiles. The system should classify these animals based on their characteristics using inheritance concepts. Each animal type will have specific attributes and abilities, and you'll need to implement a system that can manage these animals using multiple inheritance, multilevel inheritance, and hierarchical inheritance.

Your task is to design a program using C++ object-oriented programming concepts to simulate the wildlife management system for the jungle.

Instructions:
Using C++, complete the following tasks:

1. Base Class Design (Animal):

Create a base class Animal that represents a generic animal with the following attributes:
species: (string) The species of the animal (e.g., "Lion", "Parrot", "Crocodile").
age: (integer) The age of the animal.
weight: (float) The weight of the animal in kilograms.
Implement the following methods:
A constructor that initializes the species, age, and weight attributes.
A method displayInfo() to print the basic information of the animal (species, age, and weight).
2. Derived Classes:

Mammal Class (inherits from Animal):
Additional attribute:
furColor: (string) Represents the color of the mammal’s fur.
Constructor to initialize species, age, weight, and furColor.
A method makeSound() to print the sound specific to the mammal (e.g., "Lion roars").
Bird Class (inherits from Animal):
Additional attribute:
wingSpan: (float) Represents the wingspan of the bird in meters.
Constructor to initialize species, age, weight, and wingSpan.
A method fly() to print a message indicating that the bird is flying (e.g., "Parrot is flying with a wingspan of 1.2 meters").
Reptile Class (inherits from Animal):
Additional attribute:
isVenomous: (bool) Indicates whether the reptile is venomous or not.
Constructor to initialize species, age, weight, and isVenomous.
A method crawl() to print a message indicating that the reptile is crawling (e.g., "Snake is crawling").
3. Multilevel Inheritance:

Lion Class (inherits from Mammal):
Additional attribute:
prideSize: (integer) Represents the number of lions in the pride.
Constructor to initialize species, age, weight, furColor, and prideSize.
A method hunt() that prints a message about the lion’s hunting behavior (e.g., "Lion hunts with its pride of 5 members").
4. Multiple Inheritance:

FlyingReptile Class (inherits from both Bird and Reptile):
Constructor to initialize the attributes from both Bird and Reptile.
A method glide() that prints a message indicating that the flying reptile is gliding (e.g., "Flying reptile is gliding with a wingspan of 2 meters").
5. Hierarchical Inheritance:

Elephant Class (inherits from Mammal):
Additional attribute:
trunkLength: (float) Represents the length of the elephant's trunk in meters.
Constructor to initialize species, age, weight, furColor, and trunkLength.
A method useTrunk() that prints a message about how the elephant uses its trunk (e.g., "Elephant uses its trunk to drink water").
Test Scenarios:
Create a Lion Object:
Species: "Lion"
Age: 5 years
Weight: 190 kg
Fur Color: "Golden"
Pride Size: 6
Call the methods displayInfo(), makeSound(), and hunt() to showcase the lion’s abilities.
Create a Parrot Object:
Species: "Parrot"
Age: 2 years
Weight: 1.5 kg
Wing Span: 0.8 meters
Call the methods displayInfo() and fly() to simulate the parrot’s behavior.
Create a Crocodile Object:
Species: "Crocodile"
Age: 12 years
Weight: 400 kg
Is Venomous: False
Call the methods displayInfo() and crawl() to display the crocodile's information.
Create an Elephant Object:
Species: "Elephant"
Age: 10 years
Weight: 5000 kg
Fur Color: "Grey"
Trunk Length: 2 meters
Call the methods displayInfo(), makeSound(), and useTrunk() to display the elephant’s characteristics.
Create a Flying Reptile Object:
Species: "Pterodactyl"
Age: 3 years
Weight: 50 kg
Wing Span: 3 meters
Is Venomous: True
Call the methods displayInfo(), fly(), crawl(), and glide() to simulate the behavior of the flying reptile.*/

#include <iostream>
using namespace std;

class Animal{  //base class
    public:
    string species;
    int age;
    float weight;

    Animal(string s,int a,float w) : species(s),age(a),weigth(w){}

    void displayInfo(){
        cout<<"Species: "<<species<<"\nAge: "<<age<<"\nWeight: "<<weight<<endl; 
    }
};
class Mammal : public Animal{ //derived class
    public: 
    string furColour,voice;
    Mammal(string s,int a,float w,string fc,string v) : Animal(s,a,w),furColour(fc),voice(v){}
    void makeSound(){
        cout<<species<<" makes a sound of "<<voice<<endl;
    }
};
class Bird : public Animal(){
    public:
    float wingspan;
    Bird(string s,int a,float w,float ws):Animal(s,a,w),wingspan(ws){}
    void fly(){
        cout<<species<<" flies with a wingspan of "<<wingspan<<" meters"<<endl;
    }
};
class Reptile : public Animal(){
    public:
    bool isVenomous;
    Reptile(string s,int a,float w,bool iv) : Animal(s,w,a),isVenomous(iv){}
    void crawl(){
        cout<<s<<" is crawling"<<endl;
    }
};
class Lion : public Mammal{ //multilevel inheritance
    public:
    int prideSize;
    Lion(string s,int a,float w,string fc,string v,int pride) : Mammal(s,a,w,fc,v),prideSize(pride);
    void hunt() {
        cout << species << " hunts with its pride of " << prideSize << " members" << endl;
    }
};
class FlyingReptile : public Bird, public Reptile{
    public:
    FlyingReptile(string s,int a,float w,float ws,bool iv): Bird(s,a,w,ws),Reptile(s,a,w,iv),Animal(s,a,w){}
    void glide(){
       cout << species << " is gliding with a wingspan of " << wingspan << " meters" << endl;
    }
};
class Elephant : public Mammal {
    public:
    float trunkLength;
    Elephant(string sp, int ag, float wt, string fur, float trunk) : Mammal(sp, ag, wt, fur), trunkLength(trunk) {}

    void useTrunk() {
        cout << species << " uses its trunk to drink water" << endl;
    }
};
int main() {
    Lion lion("Lion", 5, 190, "Golden", 6);
    lion.displayInfo();
    lion.makeSound();
    lion.hunt();
    cout << endl;

    Bird parrot("Parrot", 2, 1.5, 0.8);
    parrot.displayInfo();
    parrot.fly();
    cout << endl;

    Reptile crocodile("Crocodile", 12, 400, false);
    crocodile.displayInfo();
    crocodile.crawl();
    cout << endl;

    Elephant elephant("Elephant", 10, 5000, "Grey", 2.0);
    elephant.displayInfo();
    elephant.makeSound(); 
    elephant.useTrunk();
    cout << endl;

    FlyingReptile pterodactyl("Pterodactyl", 3, 50, 3.0, true);
    pterodactyl.displayInfo();
    pterodactyl.fly();
    pterodactyl.crawl();
    pterodactyl.glide();
    return 0;
}