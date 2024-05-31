#include<iostream>
using namespace std;
int main() 
 {
int n;
cout<<"Enter a  number :";
cin>>n;
int a = 0,b = 1,sum =0;
cout<<a<<" "<<b<<" ";
for (int i=3;i<=n;i++)
{
sum = a + b;
    a = b; 
    b = sum;
    cout<<b<<" ";   // for printing series 

}
// cout<<b;               // for printing sum

}

 