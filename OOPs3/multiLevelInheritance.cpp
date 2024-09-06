#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class
class Mammal : public Animal {
public:
    void walk() {
        cout << "The mammal is walking." << endl;
    }
};

// Further derived class
class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal class
    myDog.walk(); // Inherited from Mammal class
    myDog.bark(); // Defined in Dog class
    return 0;
}
