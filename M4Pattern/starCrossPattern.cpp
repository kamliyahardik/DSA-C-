/* 

*   *
 * * 
  *  
 * * 
*   *

 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of raws :";
    cin>>n;
       int mid = n/2+1;

// cout<<mid;

    for(int i = 1;i<=n;i++)
    {
     
        for(int j= 1;j<=n;j++)
        {    
            if((i==j) || (i+j==n+1))
            {
            cout<<"*";

            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}