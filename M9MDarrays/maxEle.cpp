#include<iostream>
#include<climits>
using namespace std;
int main()
{

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
//max
int max = INT_MIN;
for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<n; j++ )
    {
         if(max<arr[i][j]){
            max = arr[i][j];
         }
    }
}

// smax
int smax = INT_MIN;
for(int i = 0 ;i<m; i++ )
{
    for( int j = 0; j<n; j++ )
    {
         if(arr[i][j]!=max && smax<arr[i][j]){
            smax = arr[i][j];
         }
    }
}
cout<<"Largest number is : "<<max<<endl;
cout<<"Second Largest number is : "<<smax;

}


