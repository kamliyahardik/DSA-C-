#include<iostream>
#include<vector>

  void change2Darray(int arr[3][3])
    {
        arr[0][0] =100;
    }
using namespace std;
int main()
{ 
  

 // passing 2D array to function we have required size of array/col number or both col and row nummber

int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9}};

cout<<arr[0][0]<<endl;
change2D(arr);
cout<<arr[0][0]<<endl;

}