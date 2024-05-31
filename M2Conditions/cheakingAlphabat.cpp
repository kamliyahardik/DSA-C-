/* Write a program to check whether a
character is an alphabet or not. */

#include <iostream>
using namespace std;
int main ()
{
    
char ch;
cout<<"Enter the character : ";
cin>>ch;
int ascii = (int)ch;  // type conversion

if(ascii>=97 && ascii<=122)
{
    cout<<"given character is lowercase alphabet";
}
if(ascii>=65 && ascii<=90) {
    cout<<"given character is Uppercase alphabet";
}
}
