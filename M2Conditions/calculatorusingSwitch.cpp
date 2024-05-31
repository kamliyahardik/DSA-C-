/* /* Write a program to create a calculator that 
performs basic arithmetic operations (add, 
subtract, multiply and divide) using switch case 
and functions. The calculator should input two 
numbers and an operator from user. */ 


#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cin>>a>>op>>b;
    
    // if(op=='+') cout<<a+b;
    // if(op=='-') cout<<a-b;
    // if(op=='/') cout<<a/b;
    // if(op=='*') cout<<a*b;

    /* we use switch instead of if-else */

    switch(op)
    {

        case '+' : cout<<a+b;
        break;
        case '-' : cout<<a-b;
        break;
        case '/' : cout<<a/b;
        break;
        case '*' : cout<<a*b;
        break;
    }


}