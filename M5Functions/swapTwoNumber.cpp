#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp ;
}

int main()
{
    int a,b;
    cin>>a>>b;

// using temp variable

    // int temp = a;
    // a=b;
    // b=temp;
    // cout<<a<<" "<<b;
    
// using maths eqns    

// a = a+b;
// b = a-b;
// a = a-b;
// cout<<a<<" "<<b;
  
  swap(a,b);
  cout<<a<<" "<<b;
}