#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; // you don't required mention size
    // for taking input as vector do not use V[]

    // v.push_back(90);
    // v.push_back(20);
    // v.push_back(21);
    // v.push_back(38);
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    
     v.push_back(20);//1  1
     cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(21);//2 2
     cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(10);//3 4 
     cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(38);//4  4 
     cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(53);//5 8
     cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(30);//6 8
     cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(72);//7 8
     cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(90);//8 8
     cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(88);//9 16
     cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(78);//10 16
     cout<<v.size()<<" "<<v.capacity()<<endl;

   
//    v[0]=12;  // for updating value

    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";
    // cout<<v[5]<<" ";
    // cout<<v[6]<<" ";
    // cout<<v[7]<<" ";
    // cout<<v[8]<<" ";
    // cout<<v[9]<<" ";
    // cout<<v[10]<<" ";

     cout<<endl;

     for(int i = 0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
    cout<<endl;
     cout<<"total size : "<<v.size()<<endl;
    cout<<"total capacity : "<<v.capacity()<<endl;
 
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();


     for(int i = 0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
    cout<<endl;

    cout<<"total size : "<<v.size()<<endl;
    cout<<"total capacity : "<<v.capacity();
 
   }