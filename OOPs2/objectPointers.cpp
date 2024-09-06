#include<iostream>
using namespace std ;

class Cricketer{
public:
    string name;
    int score ;
    int avg;

Cricketer(string name , int score,int avg){
    this->name = name;
    this->score = score;
    this->avg = avg;
}

};

int main(){
 Cricketer c1("Hardik Pandya",15000);
//  Cricketer c2("Rohan Gawasker",10000);
 Cricketer *c3 = &c1; 
 cout<<(*c3).score<<endl;
 (*c3).score = 12343;
 cout<<(*c3).score;


//  cout<<c1.name<<" "<<c1.score<<endl;
//  cout<<c2.name<<" "<<c2.score<<endl;
}
