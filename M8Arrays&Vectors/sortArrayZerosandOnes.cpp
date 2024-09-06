/* Method - 1 */

// #include<iostream>
// #include<vector>
// using namespace std ;
// void display(vector<int> &v)
//  {
//   for(int i = 0;i<v.size();i++)
//   {
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
//  }
// void sort(vector<int> &v)
// { 
//     // count
//     int noz = 0;int noo = 0;
//     for(int i = 0 ; i<v.size();i++)
//     {
//         if(v[i]==0) noz++;
//         else noo++;
//     }

//    // printing 
//    for(int i = 0;i<v.size();i++){
//      if(i<noz)  v[i] = 0;
//      else v[i]=1;
//    }
// }
// int main ( )
// {
//     vector<int> v1;
    
//    v1.push_back(1);
//    v1.push_back(1);
//    v1.push_back(0);
//    v1.push_back(0);
//    v1.push_back(0);
//    v1.push_back(0);
//    v1.push_back(0);
//    v1.push_back(1);
//    v1.push_back(0);
//    v1.push_back(1);
//    v1.push_back(1);
//    v1.push_back(0);

//  display(v1);
 
//  sort(v1);
//  display(v1);


// }

/* method 2 */   //two pointers approch

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
void sort(vector<int> &v)
{  
  // two pointer approch

  int i=0;
  int j = v.size()-1;
 while(i<j)
 {
  if(v[i]==0) i++;
  if(v[j]==1) j--;
  if(j<i) break;
  if(v[i]==1 && v[j]==0) 
  {
    int temp = v[i];
    v[i] = v[j];
   v[j] = temp;
   i++;
   j--;
  }
 }
 return;
}
int main ( )
{
    vector<int> v1;
    
   v1.push_back(1);
   v1.push_back(1);
   v1.push_back(0);
   v1.push_back(0);
   v1.push_back(0);
   v1.push_back(0);
   v1.push_back(0);
   v1.push_back(1);
   v1.push_back(0);
   

 display(v1);
 
 sort(v1);
 display(v1);


}

