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
 

 vector<int>v2(v1.size());

   for(int i = 0 ; i<=v1.size()-1;i++)
   {
     // i + j = size - 1 
     v2[i] = v1[v1.size()-1-i];
   }

 display(v2);

   
}