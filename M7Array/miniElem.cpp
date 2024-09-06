#include<iostream>
#include <climits>
using  namespace std;

int main()
{


   int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    

    // take value from user 

        for(int i=0;i<=n-1;i++)
        {
            cin>>arr[i];
        }
        int mini = INT_MAX;
        for(int i= 0;i<=n-1;i++)
        {
            mini = min(mini,arr[i]);
        }
        cout<<mini;
        

        

}