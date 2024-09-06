#include<iostream>
#include<string>
using namespace std;
int main()
{

    // string is mutable in c++
    
    int n;
      
    cin>>n;
  char str[n];
    for(int i = 0;i<n;i++)
    {
        cin>>str[i];
    }
    cout<<endl;

    for(int i = 0;i<n;i++)
    {
        cout<<str[i];
    }

cout<<endl;

 for(int i = 0;i<n;i++)
    {
        if(i%2==0) str[i]='a';
    }
    cout<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<str[i];
    }


    
}