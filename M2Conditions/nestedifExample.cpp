
/* Take positive integer input and tell if it 
is divisible by 5 or 3 but not divisible by 15. */

#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout<<"Enter the number :";
    // cin>>n;
    // if(( n%3==0 || n%5==0 ) && (n%15!=0))
    // {
    //     cout<<"number is divisible by 5 or 3 but not 15";
    // }else{
    //     cout<<"number not matching";
    // }

// other ways to write above code using Nested-if

int n;
    cout<<"Enter the number :";
    cin>>n;
    if(( n%3==0 || n%5==0 )  )
    {
        if(n%15!=0){
            cout<<"number is divisible by 5 or 3 but not 15";
        }
        else{
             cout<<"number not matching";
        }
       
    }else{
        cout<<"number not matching";
    }


}