#include<iostream>
using namespace std;
int gcd(int x,int y)
{   int hcf =1;
    // for(int i= 1;i<=min(x,y);i++)
    for(int i=min(x,y);i>=1;i--)
    {
        if(x%i==0 && y%i==0) // i is common factor
        {
            hcf=i;
            break;
        }   
    }
    return hcf;
}

int main()

{ 
    int a,b;
   cout<<"Enter 1st number : ";
   cin>>a;
   cout<<"Enter 2nd number : ";
   cin>>b;
   cout<<gcd(a,b);
}