#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
//  vector<int> v(12,5);   //vector with size
//  cout<<v[12];  // 5 

 //input in vector

//  vector<int> v(6);  // size is required
//  for(int i = 0; i<6; i++)
//  {
//     cin>>v[i];
//  }
//  for(int i = 0; i<6; i++)
//  {
//     cout<<v[i]<<" "<<endl;
//  }

//  vector<int> v;  // size is not required
//  for(int i = 0; i<5; i++)
//  {
//     int x;
//     cin>>x;
//    v.push_back(x);
//  }
//  for(int i = 0; i<5; i++)
//  {
//     cout<<v[i]<<" "<<endl;
//  }

 // use of at()

// vector<int> v;

// v.push_back(20);
// v.push_back(90);
// v.push_back(213);
// v.push_back(443);
// v.at(1)=80;
// cout<<v.at(1);
// cout<<v.at(3);


// use of sort()

vector<int> v;
v.push_back(144);
v.push_back(91);
v.push_back(2);
v.push_back(87);

for(int i = 0; i <4;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort(v.begin(),v.end());

for(int i = 0; i <4;i++){
    cout<<v[i]<<" ";
}
}
