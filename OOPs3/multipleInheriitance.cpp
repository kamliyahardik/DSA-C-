#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Base class 2
class Pet {
public:
    void play() {
        cout << "The pet is playing." << endl;
    }
};

// Derived class
class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal class
    myDog.play(); // Inherited from Pet class
    myDog.bark(); // Defined in Dog class
    return 0;
}
