/* Write a program to check whether a 
given character is a vowel or a consonant. */

#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout<<"Enter The Character :";
     cin>>ch;
    int n = int(ch) ;
   
    if((n<=122 && n>=97) || (n<=90 && n>=65))
    {
        if(ch=='a'|| ch=='e' || ch == 'i' || ch=='o' || ch=='u')
        {
           cout<<"character is vowels"<<endl;
        }
        else{
            cout<<"character is consonant"<<endl;
        }
    }
    else{
        cout<<"character is not alphabet"<<endl;
    }

}
