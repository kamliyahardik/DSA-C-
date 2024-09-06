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

 void move(vector<int> &v)
 { 
    int i = 0;
    int j = v.size()-1;
    while(i<j)
    {
        if(v[i]>=0 && v[j]<0)
        {
           int temp = v[i];
           v[i]=v[j];
           v[j] =temp;
        
        }
        if(v[i]<0) i++;
        if(v[j]>=0) j--;
        // if(i>j) break;
        
    }
    return ;
 }

int main ( )
{
    vector<int> v1;
    
   v1.push_back(-2);
   v1.push_back(2);
   v1.push_back(-33);
   v1.push_back(-90);
   v1.push_back(83);
   v1.push_back(-12);
   v1.push_back(23);
   v1.push_back(-43);

 display(v1);
 move(v1);
 display(v1);

}