#include<iostream>
using namespace std;
int main()
{
    //Declaration

    // int array[][]; //error - > index is required
    // int arr[2][3];   // 
    // cout<<arr[0][0]; // garbage value

   // initilization

    // int arr2[2][3] = {12,43,5,524,65,6};
    // cout<<arr2[0][1];
    // int arr3[2][3] = {{12,43,5},{524,65,6}};
    // cout<<arr3[0][2];
    //  int arr4[][3] = {12,43,5,524,65,6};   // not requrired row index
    // cout<<arr4[0][2];
    //  int arr5[2][] = {12,43,5,524,65,6};   // ERROR - > Column index is required
    // cout<<arr5[0][2];

//Traversal through 2d array

// int arr[2][3] = {12,43,5,524,65,6};   // ERROR - > Column index is required
//     // cout<<arr[0][2];
// for(int i = 0 ;i<2; i++ )
// {
//     for( int j = 0; j<3; j++ )
//     {
//          cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// Taking input from 2D array 

int m ,n;
cout<<"Enter a number of rows : ";
cin>>m;
cout<<"Enter a number of col : ";
cin>>n;
int arr[m][n];

for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<n; j++ )
    {
         cin>>arr[i][j];
    }
}
// print 2D array
for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<n; j++ )
    {
         cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}


