#include<iostream>
using namespace std;
int main() 
 {
int a,b,n;
cout<<"Enter a base :";
cin>>a;
cout<<"Enter a exponent :";
cin>>b;
bool flag = true;   // true means power is positive 

if(b<0)
{
    flag = false;    // false means power is negative
    b = -b;
}
float power = 1 ;
for(int i=1;i<=b;i++)
{
    power = power * a;
}
if(flag==false)
{
    power = 1/power;
    b=-b;
}

if(a==0 && b==0)
{
    cout<<"not defined";
}
else{
    cout<<power;
}

}

 