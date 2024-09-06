#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> v;
   v.push_back(12);
   v.push_back(24);
   v.push_back(145);
   v.push_back(22);
   v.push_back(12);
   v.push_back(12);
   v.push_back(12);
   v.push_back(18);
int x = 12;
// int idx = -1;
//    for(int i = 0 ;i<v.size();i++)
//    {
//     if(v[i]==x)
//     {
//         idx = i;
//     }
//    }

int idx = -1;
for(int i = v.size()-1; i>=0;i--)
{
 if(v[i]==x){
   idx = i;
   break;
 }
 
} cout<<idx;
  
}