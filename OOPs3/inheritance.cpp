#include<iostream>
using namespace std;
class Scooty { //parent class
    public :
 int mileage;
 int topSpeed;
 private :
 int bootSpace;

};
class Bike :public Scooty { // child class
    public :
    int gears ;
} ;
int main()
{
 Bike b1;
 b1.mileage=89;
 b1.topSpeed =120;
 b1.gears = 4;

 b1.bootSpace;//error
}