#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat is meowing." << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    myDog.eat();  // Inherited from Animal class
    myDog.bark(); // Defined in Dog class

    myCat.eat();  // Inherited from Animal class
    myCat.meow(); // Defined in Cat class

    return 0;
}
