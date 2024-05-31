#include<iostream>
using namespace std;
int main() 
 {
int n;
cout<<"Enter a  number :";
cin>>n;


int lastDigi;
int reverse = 0;
while(n>0){
    reverse *= 10;
    lastDigi = n%10;
    reverse +=lastDigi;
   n/=10;
   
}
cout<<reverse;

 }

 