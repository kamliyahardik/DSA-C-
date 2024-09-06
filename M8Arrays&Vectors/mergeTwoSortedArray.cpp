// 2nd method in Leetcode proNo-88 Merge Two sorted array 
// in which we also use 3 pointer approach


/* Method - 1 two pointers approach */
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

 vector<int> merge(vector<int> &arr1, vector<int> &arr2)
 { 
   
    int n =arr1.size();
    int m =arr2.size();
    int i = 0;//arr1
    int j = 0;// arr2
    int k = 0;// ans
     vector<int> ans(m+n);
    while(i<=n-1 && j<=m-1)
    {
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else{
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }
    // for remaning

  if(i==n){// arr1 ke sare ele utha suke he
    while(j<=m-1)
    {
       ans[k]=arr2[j];
       j++;
       k++;
    }
  }
   if(j==m){// arr2 ke sare ele utha suke he
    while(i<=n-1)
    {
       ans[k]=arr1[i];
       i++;
       k++;
    }
  }

return ans;
 }

int main()
{
   vector<int> arr1;
    
   arr1.push_back(2);
   arr1.push_back(5);
   arr1.push_back(17);
   arr1.push_back(19);
   display(arr1);

   vector<int> arr2;

   arr2.push_back(1);
   arr2.push_back(7);
   arr2.push_back(8);
   arr2.push_back(22);
   arr2.push_back(33);
   arr2.push_back(62);
   arr2.push_back(90);
     display(arr2);

  vector<int> v = merge(arr1,arr2);
display(v);
}