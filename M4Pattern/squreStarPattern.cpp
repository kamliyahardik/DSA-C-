/*

****
****
****
****

 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter side of squre :";
    cin>>n;
   

    for(int i = 1;i<=n;i++)
    {
        for(int i= 1;i<=n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}