#include <iostream>
#include <string>

using namespace std;
int main()
{
  int n ;
  cout<<"enter the size of string array : ";
  cin>>n;
  
  string str[n];
  for(int i = 0 ; i<n;i++ )
  {
    cin>>str[i];
  }
// print

int max = stoi(str[0]);
string  maxS = str[0];
  for(int i = 0 ; i <n;i++ )
  {
    // cout<<str[i];
    int x = stoi(str[i]);
    if(max<x) {
        max = x;
       maxS = str[i] ;
    }
 }
 cout<<max<<endl;
  cout<<maxS;

}