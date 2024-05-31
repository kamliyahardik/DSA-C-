/* Take 3 numbers input and tell if they 
can be the sides of a triangle */


#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"enter first side length : "<<endl;
    cin>>a;
    cout<<"enter second side length : "<<endl;
    cin>>b;
    cout<<"enter third side length : "<<endl;
    cin>>c;
  
if((a+b>c) &&(a+c>b) && (b+c>a))
{
  cout<<"side of triangle "<<endl;
}
else{
  cout<<"it is not side of triangle "<<endl;

}
}
