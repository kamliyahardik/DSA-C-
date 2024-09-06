#include<iostream>
using namespace std ;

class Cricketer{
public:
    string name;
    int score ;
    float avg;

Cricketer(string name , int score,float avg){
    this->name = name;
    this->score = score;
    this->avg =avg;
}

};

void change(Cricketer *c)
{
    // (*c).avg = 13.7;
    c->avg = 13.7;
}


int main(){
 Cricketer c1("Hardik Pandya",15000,24.5);
//  Cricketer c2("Rohan Gawasker",10000);
// cout<<c1.avg<<endl;
// change(&c1);             //call by refe
// cout<<c1.avg<<endl;

Cricketer *ptr  = &c1;
// cout<<(*ptr).score<<" "<<(*ptr).avg<<endl;
cout<<ptr->score<<" "<<ptr->avg<<endl;

//  cout<<c1.name<<" "<<c1.score<<endl;
//  cout<<c2.name<<" "<<c2.score<<endl;
}
