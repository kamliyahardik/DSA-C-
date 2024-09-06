#include<iostream>
#include<string>
#include<vector>

using namespace std ;
int main()
{
 
    string   s = "physicswallahhh";
   vector<int> arr(26,0);
//filling arr with freq..
   for(int i = 0 ; i <s.length();i++)
   {
    char ch = s[i];
    int ascii = (int)ch;
    arr[ascii-97]++;
   }

   // finding max
int max = 0;
   for(int i  = 0 ; i <26;i++)
   {
    if(arr[i]>max) max = arr[i];
   }

   // printing char and it's freq..

   for(int i = 0 ; i < 26 ; i++)
   {
     if(arr[i]==max){
       int asciii = 97+i;
       char ch = (char)asciii;
       cout<<ch<<" "<<max<<endl;

     }
   }





}