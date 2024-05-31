#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   n%2==0 ? cout<<"even" : cout<< "odd";
}

/* in case of nesting ternary oprator solve right to left */