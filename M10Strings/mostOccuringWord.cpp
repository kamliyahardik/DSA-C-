#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int  main()
{
    string str = "Hardik is a coder. He is is also a computer engineer.";

    stringstream ss(str);
string temp ;
vector<string> v;
while(ss>>temp)
{
    v.push_back(temp);
}
// print vector 

// for(int i=0; i<v.size();i++)
// {
//     cout<<v[i]<<endl;
// }
// cout<<endl;
// sort vector 
sort(v.begin(),v.end());
// for(int i=0; i<v.size();i++)
// {
//     cout<<v[i]<<"  ";
// }

// we can use count for cheaking nearest word same or not 
int maxCount  = 0;
int count = 1;

for(int i = 1;i<v.size();i++)
{
    if(v[i]==v[i-1]) count++;
    else count =1;
    maxCount = max(maxCount,count);
}

count = 1;
for(int i = 1;i<v.size();i++)
{
    if(v[i]==v[i-1]) count++;
    else count =1;
    if(count==maxCount)
    {
        cout<<v[i]<<" "<<maxCount;
    }
}
}