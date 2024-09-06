#include<iostream>
using namespace std;
int main (){


 
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];

    // take value from user 

        for(int i=0;i<=n-1;i++)
        {
            cin>>arr[i];
        }
  

    

int x;
cout<<"enter number you want to search :";
cin>>x;

        // search 
        bool flag = false;  // used for check mark 
        for(int i= 0;i<=n-1;i++)
        {
            if(x==arr[i]) flag=true;
        }

        if(flag==true) cout<<"Element present ";
        else cout<<"not found elements ";
}