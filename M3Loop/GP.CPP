/* 
Display this GP - 1,2,4,8,16,32,.. upto ‘n’ 
terms.
 */

#include <iostream>
using namespace std;
int main()
{


 
 // 1,2,4,8,16,32 

 int n;
 cout<<"enter nth term : ";
 cin>>n;

//  int a = 1;
//  for(int i=1;i<=n;i++)
//  {
//     cout<<a<<endl;
//     a = a * 2;
//  }


 // 3,12,18,...n

int b = 3,c=4;

 while(n--)
 {
   cout<<b<<endl;
   b = b *c;
  
   // i++;
 }



}
