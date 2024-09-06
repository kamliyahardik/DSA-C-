#include<iostream>
#include <climits>
using  namespace std;

void display(int a[],int size)
{
   for(int i = 0;i<=size-1;i++)
   {
    cout<<a[i]<<" ";
   }
   cout<<endl;
}

void change(int b[],int size)
{
    for(int i = 0;i<=size-1;i++)
    {
        b[1]=1000;
        cout<<b[i]<<" ";
    }
}
int main()
{
int arr [5] = {45,52,34,53,24};
int size = sizeof(arr)/sizeof(arr[0]);
cout<<size<<endl;
display(arr ,size );
change(arr,size);

}