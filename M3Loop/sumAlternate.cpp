#include<iostream>
using namespace std;
int main() 
 {
int n;
cout<<"Enter a number :";
cin>>n;
int sum = 0;
// sum of 1-2+3-4+5-6+7....n
for(int i=0;i<=n;i++)
{
  if(i%2!=0)
  {
sum +=i;
  }
  else{
    sum -=i;
  }
}
cout<<sum;
 }

 