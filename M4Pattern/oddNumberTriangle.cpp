/* 

1
13
135
1357

 */


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of raws :";
    cin>>n;
    
    for(int i = 1;i<=n;i++)
    {
        for(int j= 1;j<=2*i-1;j+=2)
        {
            cout<<j;
        }
        cout<<endl;
    }


/* second method */

    // for(int i = 1;i<=n;i++)
    // {
    //     int c= 1;
    //     for(int j= 1;j<=i;j++)
    //     {  
    //          cout<<c;
    //         c+=2;
           
    //     }
    //     cout<<endl;
    // }
}