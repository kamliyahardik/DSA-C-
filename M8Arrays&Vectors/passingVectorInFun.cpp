#include<iostream>
#include<vector>
using namespace std;
// vector is working as pass value as well as pass by reference using simple (&) ampercent

// void  changed(vector<int> a){
//     for(int i = 0; i <a.size();i++){
//         a[2]=100;
//     cout<<a[i]<<" ";
// }
// return ;
// }

void  changed(vector<int> & a){
    for(int i = 0; i <a.size();i++){
        a[2]=100;
    cout<<a[i]<<" ";
}
return ;
}

int main()
{
vector<int> v;
v.push_back(144);
v.push_back(91);
v.push_back(2);
v.push_back(87);
for(int i = 0; i <4;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
changed(v);
cout<<endl;
for(int i = 0; i <4;i++){
    cout<<v[i]<<" ";
}

}