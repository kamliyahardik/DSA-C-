#include<iostream>
#include<vector>
using namespace std ;

void display(vector<int> &v1)
 {
  for(int i = 0;i<v1.size();i++)
  {
    cout<<v1[i]<<" ";
  }
  cout<<endl;
 }

void reversePart(int i,int j, vector<int> &v){
      while(i<=j)
      {  
         
         int temp;
         temp = v[i];
         v[i] = v[j];
         v[j]= temp;
        i++;
        j--;

      } 
      return;
 }

int main ()
{
   vector<int> v1;
   v1.push_back(12);
   v1.push_back(23);
   v1.push_back(33);
   v1.push_back(90);
   v1.push_back(30);
   v1.push_back(13);
   v1.push_back(82);
   display(v1);
   int k =2;
    // rotate    
int n = v1.size();
if(k>n) k = k % n ;
 reversePart(0,n-k-1,v1);
 reversePart(n-k,n-1,v1);
 reversePart(0,n-1,v1);
display(v1);

}