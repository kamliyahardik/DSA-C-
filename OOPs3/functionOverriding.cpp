#include<iostream>
using namespace std;
class Scooty { //parent class
    public :
 int mileage;
 int topSpeed;
 virtual  void sound()
    {
        cout<<"Droom Droom "<<endl;
    }
 private :
 int bootSpace;


};
class Bike :public Scooty { // child class
    public :
    int gears ;
    void sound()
    {
        cout<<"Vroom Vroom "<<endl;
    }
} ;

int main()
{
//  Bike b1;
//  Bike *b1 = new Bike();
Scooty *b2 = new Bike();  // run time polymorphyism
 b2->sound();
//  Scooty s1;
//  Scooty *s1 = new Scooty();
//  s1->sound();
 
}