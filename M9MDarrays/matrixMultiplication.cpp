
#include<iostream>
#include<climits>
using namespace std;
int main()
{

int m,n;
cout<<"Enter a number raw of 1st matrix :" ;
cin>>m;
cout<<"Enter a number col of 1st matrix :" ;
cin>>n;

int p,q;
cout<<"Enter a number raw of 2nd matrix :" ;
cin>>p;
cout<<"Enter a number col of 2nd matrix :" ;
cin>>q;

// taking input 

if(n==p){

int arr[m][n];
cout<<"Enter ele of 1st matrix :";
for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<n; j++ )
    {
         cin>>arr[i][j];
    }
}

int arr2[p][q];
cout<<"Enter ele of 2nd matrix :";
for(int i = 0 ;i<p; i++ )
{
    for( int j = 0; j<q; j++ )
    {
         cin>>arr2[i][j];
    }
}
cout<<endl;

// matrix multi
int res[m][q];

for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<q; j++ )
    {
       res[i][j] = 0;
       
        for(int k = 0 ; k<p;k++)
       {
         res[i][j] += arr[i][k] * arr2[k][j];
       }

    }

}

// print res matrix

for(int i = 0 ;i<m; i++ )
{
    for( int j =0; j<q; j++ )
    {
        cout<<res[i][j]<<" ";
     }
     cout<<endl;
}

}

else {
    cout<<"Matrix multiplication is not perform ";
}

}