#include<iostream>
#include<climits>
using namespace std;
int main()
{

int arr[2][3] = { 1,3,4,5,6,7};
int arr1[2][3] = {4,43,63,2,43,40};
int arr3[2][3];


for(int i = 0 ;i<2; i++ )
{
    for( int j = 0; j<3; j++ )
    {
        arr3[i][j] = arr1[i][j] + arr[i][j];
    }
}

// sum of matrix
for(int i = 0 ;i<2; i++ )
{
    for( int j = 0; j<3; j++ )
    {
       cout<< arr3[i][j]<<" ";
    }
    cout<<endl;
}


// there are three way to print matrix sum 

}


