#include <iostream>
using namespace std;
int main()
{


//finding reminder of two number 
int a = 39;
int b = 4;

//a = b * q + r
int q = a/b;
cout<<q<<endl;

//reminder equations :
int r;
r = a - (b*q); 
// cout<<r;

/* instead of above we can use % oparators */

int reminder = a % b;
cout<<reminder<<endl;

//cout<<10%(-3)<<endl;     //  positive ans
//cout<<10%(3)<<endl;      // positive ans
// cout<<-10%(3)<<endl;      // negative ans
// cout<<-10%-3<<endl;       // negative ans

}