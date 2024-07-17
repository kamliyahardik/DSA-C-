#include<iostream>
using namespace std;
int fact(int n)
{
    int fact =1;
    for(int i=2;i<=n;i++)
    {
        fact *=i;
    }
    return fact;
}
int main()
{
    int n;
  cout<<"ENTER NUMBER :";
  cin>>n;
// int fact =1;
//   for(int i=1;i<=n;i++)
//   {
//       fact *=i;
//       cout<<fact<<endl;
//   }

// factorial using function
for(int i=1;i<=n;i++)
{
    cout<<fact(i)<<endl;
}
}