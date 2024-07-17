
/* 

    1
   121
  12321
 1234321
123454321

*/


#include<iostream>
using namespace std;
int main()
{
     int n;
    cout<<"Enter the number of raws : ";
    cin>>n;


    for(int i=1;i<=n;i++)
    {    
        //    spaces
        for(int j=1;j<=n-i;j++)
        {
           cout<<" ";
        }
       // tringle 1
        for(int k=1;k<=i;k++)
        {
           cout<<k;
        }
        //tringle 2
        for(int q=i-1;q>=1;q--)
        {
            cout<<q;
        }
        cout<<endl;
    }
}