#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int  main()
{
    string str = "Hardik is a coder. He is also a computer engineer.";

    stringstream ss(str);
string temp ;
int count = 0;
while(ss>>temp)
{
    cout<<temp<<endl;
    count++;
}
cout<<count;
}