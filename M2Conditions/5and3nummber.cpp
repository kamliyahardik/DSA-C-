#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the number:" ;
    int a;
    cin>>a;
    if(a%5==0)
    {
      if(a%3==0){
        cout<<"divisible by 5 and 3"<<endl;
      }else{
        cout<<"not divisible by 5 and 3"<<endl;
      }
    }
    else{
        cout<<"not divisiblr by 5 and 3";
    }
}