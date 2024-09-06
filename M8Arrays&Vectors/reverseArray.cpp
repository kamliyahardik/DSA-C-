#include<iostream>
#include<vector>
using namespace std ;
void display(vector<int> &v)
 {
  for(int i = 0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
 }

int main ( )
{
    vector<int> v1;
    
   v1.push_back(12);
   v1.push_back(23);
   v1.push_back(33);
   v1.push_back(90);
   v1.push_back(13);
   v1.push_back(82);

 display(v1);
 
for(int i = 0 , j = v1.size()-1; i<=j;i++,j--)
   {
//swaping 

 int temp = v1[i];
v1[i]=v1[j];
v1[j]=temp;
}
display(v1);

// int arr[2] = {12,34};
// cout<<0[arr];
}