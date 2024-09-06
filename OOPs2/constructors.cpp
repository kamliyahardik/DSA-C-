#include<iostream>
#include <string>
using namespace std ; 
class Student{
    public:
    int rno ;
    string name;
    float cgpa;
Student (){
// Default Constructor
}    

Student(string n,int r,float c) {
       name = n;
       rno = r;
       cgpa = c;
}

Student(float c,string n,int r) {
       name = n;
       rno = r;
       cgpa = c;
}
Student (string n,int r){
    name = n;
    rno = r;
}

};
int main()
{
Student s1("Hardik",116,7.43);

Student s3(7.34,"rohan",110);

Student s4("Milan",30);

Student s2;
s2.name = "Bhavik";
s2.rno = 12;
s2.cgpa = 8.89;

// copy constructor

Student s5 = s1;
s5.name="Ravina";// Deep Copy  s1 value not change

Student s6(s2);
s6.rno = 290;//Deep copy s2 value not change


cout<<s1.cgpa<<" "<<s1.name<<" "<<s1.rno<<endl;
cout<<s2.cgpa<<" "<<s2.name<<" "<<s2.rno<<endl;
cout<<s3.cgpa<<" "<<s3.name<<" "<<s3.rno<<endl;
cout<<s4.name<<" "<<s4.rno<<endl;
cout<<s5.cgpa<<" "<<s5.name<<" "<<s5.rno<<endl;
cout<<s6.cgpa<<" "<<s6.name<<" "<<s6.rno<<endl;

}