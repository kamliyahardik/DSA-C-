/* Write a program to input month number and 
print total number of days in month using switch 
case.  */

#include<iostream>
using namespace std;
int main(){

    int n ;
    cout<<"Enter the month number : ";
    cin>>n;
    // switch(n){
    //     case 1 :
    //         cout<<31;
    //         break;
    //     case 2 :
    //         cout<<28;
    //         break;
    //     case 3 :
    //         cout<<31;
    //         break;
    //     case 4 :
    //         cout<<30;
    //         break;
    //     case 5 :
    //         cout<<31;
    //         break;
    //     case 6 :
    //         cout<<30;
    //         break;
    //     case 7 :
    //         cout<<31;
    //         break;
    //     case 8 :
    //         cout<<31;
    //         break;
    //     case 9 :
    //         cout<<30;
    //         break;
    //     case 10 :
    //         cout<<31;
    //         break;
    //     case 11 :
    //         cout<<30;
    //         break;
    //     case 12 :
    //         cout<<31;
    //         break;
        
    // }

    /*  we can use condition in switch  */

// 1 3 5 7 8  10 12 ==> 31
//4 6 9 11
//2
    switch((n<=7) && (n%2!=0) || (n>=8) &&  (n%2==0))
    {
        case 1 : 
             cout<<31;
    }

    switch(n==4 || n== 6 || n==9 || n==11  ) 
    {
        case 1 :
        cout<<30;
    }
    switch(n)
    {
        case 2 : 
        cout<<28;
    }
}



