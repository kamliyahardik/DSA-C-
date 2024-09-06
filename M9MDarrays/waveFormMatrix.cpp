
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

// taking input 

int arr[m][n];

cout<<"Enter ele of  matrix :";
for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<n; j++ )
    {
         cin>>arr[i][j];
    }
}

cout<<endl;



// print res matrix
for(int j =0 ;j<n; j++ )
{

//     if(i%2==0){
//     for( int j =0; j<n; j++ )
//     {
//         cout<<arr[i][j]<<" ";
//      }
//     }
//    else {
//      for( int j = n-1; j>=0; j--)
//     {
//         cout<<arr[i][j]<<" ";
//      }
//    }


//     if(i%2==0){
//     for( int j =0; j<n; j++ )
//     {
//         cout<<arr[i][j]<<" ";
//      }
//     }
//    else {
//      for( int j = n-1; j>=0; j--)
//     {
//         cout<<arr[i][j]<<" ";
//      }
//    }


    if(j%2==0){
    for( int i=0; i<m; i++ )
    {
        cout<<arr[i][j]<<" ";
     }
    }
   else {
     for( int i = m-1; i>=0; i--)
    {
        cout<<arr[i][j]<<" ";
     }
   }






}

}
