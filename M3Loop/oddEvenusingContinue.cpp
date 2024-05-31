/* Continue Statement */

#include<iostream>
using namespace std;
int main (){
    int n;
cin>>n; 
for ( int i = 0; i<=n; i++)
{
 if(i%2!=0) continue;  // even
//  if(i%2==0) continue;   //odd
 cout<<i<<endl;
}
}