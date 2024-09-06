#include<iostream>
#include<vector>
using namespace std;
int main()
{ 

    /* 2D vector  */

    // Used in leetcode qns function we have given 2D vector not array .

//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
  
//   vector<int> v2;
//   v2.push_back(4);
//   v2.push_back(5);

//   vector<int> v3;
//   v3.push_back(6);
//   v3.push_back(7);
//   v3.push_back(8);
//   v3.push_back(9);
//   v3.push_back(10);
 
//     vector< vector<int> > v;
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v2);

//     cout<<v[1][1];
//     cout<<v[1][2];// invalid


    /* 2D vector Declaration as array  */

    // int arr[3][3];
    // vector<vector <int> > vec;
    // vector<vector <int> > vec(size);
    // vector<vector<int>> vec(row,vector<int>(cols,elem));
    // vector<vector <int> > vec(3);

    vector<vector <int> > vec(3,vector<int>(4,2));
    // cout<<vec[0][0];
    for(int i = 0 ; i<3;i++)
    {
        for(int j = 0 ; j<4;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;

    }

    cout<<vec.size()<<endl; // its like arrays row no
    cout<<vec[0].size();// it's like arrays col no




}