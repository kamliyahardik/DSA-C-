/* 

****
****
****
****
****

*/

// DONE

#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter number of raws :";
    cin>>m;
    cout<<"enter number of cols :";
    cin>>n;

    for(int i = 1;i<=m;i++)
    {
        for(int i= 1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}