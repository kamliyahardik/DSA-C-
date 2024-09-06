#include<iostream>
using namespace std ;
void fun(int n ,int *ptr1 ,int*ptr2 ){
 
 *ptr2 = n%10 ; //lastnum

 while(n>9)
 {
    n/=10;
 }
*ptr1 = n;  //firstnum
 return;

}
int main ()

{
    int n;
    cin>>n;

    int firstNum ,lastNum ;
    int* ptr1 = &firstNum;
    int* ptr2 = &lastNum;
    
    fun(n,ptr1,ptr2);

    cout<<firstNum<<" "<<lastNum;
    
    
}