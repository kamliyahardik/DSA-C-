/* 
12345
12345
12345
12345
12345
 */

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
        for(int j=1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}