// only  apply for n*n matrix like 2*2,3*3,4*4 ...


#include<iostream>
#include<climits>
using namespace std;
int main()
{

int m;
cout<<"Enter a number of rows/cols of matrix  : ";
cin>>m;
int arr[m][m];

for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<m; j++ )
    {
         cin>>arr[i][j];
    }
}
// print
cout<<endl; 
for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<m; j++ )
    {
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;
}


// changes matrix to it's transpose without an extra array.

for(int i = 0 ;i<m; i++ )
{
    for( int j =i+1; j<m; j++ )
    {
        int temp  =  arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;

    }
}

cout<<endl;
for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<m; j++ )
    {
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;
}

}