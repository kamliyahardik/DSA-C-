#include<iostream>
using namespace std;
int main()
{
// int x = 12;
// int* ptr = &x;
// cout<<ptr<<endl;
// ptr = ptr + 1 ;
// cout<<ptr<<endl;   // add 4 byte for int - in hexadecimal address4
// cout<<*ptr;
   

    int x = 12;
    int* ptr = &x;
    cout<<ptr<<endl;
    *ptr = *ptr + 1 ;
    cout<<*ptr;
}

