#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;
int main()
{

//sorting of string is based on ASCII value.


    string   s = "physicswallah";
    string   t = "wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    cout<<s<<endl;
    cout<<t<<endl;

/* String is anagram or not ??*/

    if(s==t) cout<<true;
    else cout<<false;


}