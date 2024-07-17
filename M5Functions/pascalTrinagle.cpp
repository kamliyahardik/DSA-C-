// Using Function in c++


/* 

enter n :6
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1

 */
#include<iostream>
using namespace std;


 int fact(int x)
    {
        int f= 1;
        for(int i=2;i<=x;i++ )
        {
            f *= i;
        }
        return f;
    }

   int  combination(int n,int r)
   {
      int ncr = fact(n)/(fact(r)*fact(n-r));
      return ncr;
   }
    

int main()
{
    int n,r;
    cout<<"enter n :";
    cin>>n;
    // cout<<"enter r :";
    // cin>>r;
    for(int i=0;i<=n;i++)
    {
     for(int j =0;j<=i;j++)
     {
        cout<<combination(i,j)<<" ";
     }
      cout<<endl;
    }
}
