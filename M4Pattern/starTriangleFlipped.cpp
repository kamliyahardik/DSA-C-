/* 

    *
   **
  ***
 ****
*****

 */


#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the number of raws : ";
    cin>>n;


    // for(int i=1;i<=n;i++)
    // {    

    //     for(int j=1;j<=n-i;j++)
    //     {
    //        cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++)
    //     {
    //        cout<<"*";
    //     }
        
        
    //     cout<<endl;
    // }

    /* Second Method */

        for(int i=1;i<=n;i++)
    {    

        for(int j=1;j<=n;j++)
        {
           if(i+j>=n+1) cout<<"*";
           else cout<<" ";
        }
      
         cout<<endl;
    }

}