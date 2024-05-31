/* 
 Display this AP - 1,3,5,7,9.. upto ‘n’ 
terms.
 */

#include <iostream>
using namespace std;
int main()
{
 
 // using maths formula

 int n;
 cout<<"enter nth term : ";
 cin>>n;

// for(int i=1;i<=2*n-1;i=i+2)
//  cout<<i<<endl;

//using saprate variable 

// 1 3 5 7 9 11 13 15 17 19

// int c;
// c = 1;
// for(int i=1;i<=n;i++){
// cout<<c<<endl;
// c = c+ 2;
// }

// 4 7 10 13 15

// int b= 4;
// for(int  i= 1;i<=n;i++)
// {
//   cout<<b<<endl;
//   b = b + 3 ;
// }


// 4,7,10,13,16,...n

for(int i=4;i<=3*n+1;i=i+3)
 cout<<i<<endl;
}
