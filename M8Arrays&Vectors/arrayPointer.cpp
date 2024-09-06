#include<iostream>
using  namespace std;

int main()
{

int arr [5] = {45,52,34,53,24};
int * ptr = arr;   //0x61fef8
// int * ptr = &arr[0];   //0x61fef8
cout<<ptr<<endl;


// ptr[0]=12;
// for(int i = 0;i<=4;i++)
// {
//     cout<<ptr[i]<<" ";
// }
// cout<<endl;
// for(int i = 0;i<=4; i++)
// {
//     cout<<*ptr<<" ";
//     ptr++;
// }



// *ptr = 8;  //prt[0] = 8
// ptr++;   // pointing to 2nd elem
// *ptr= 9;
// ptr--;   // pointing to 1st elem

// for(int i = 0;i<=4; i++)
// {
//     cout<<*ptr<<" "<<ptr<<endl;
//     ptr++;
// }

// ptr = arr;  //ptr pointing to 1st element
// cout<<ptr;  
}