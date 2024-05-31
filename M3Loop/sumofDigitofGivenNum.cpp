#include<iostream>
using namespace std;
int main() 
 {
int n;
cout<<"Enter a  number :";
cin>>n;
int a= n;
int sum = 0;
int lastDigi;
while(n>0){
 
  lastDigi = n % 10;
  sum += lastDigi;
  n/=10;
}
cout<<sum;
 }



 