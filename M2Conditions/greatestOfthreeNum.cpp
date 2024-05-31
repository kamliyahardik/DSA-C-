#include <iostream>
using namespace std;
int main ()
{
int a,b,c;
cout<<"enter first num :";
cin>>a;
cout<<"enter second num :";
cin>>b;
cout<<"enter third num :";
cin>>c;

if(a>b && a>c){
cout<<a<<" "<<"is greatest";
}

if(b>a && b>c){
cout<<b<<" "<< "is greatest";

}

if(c>a && c>b)
{
cout<<c<<"is greatest";

}
 
}
