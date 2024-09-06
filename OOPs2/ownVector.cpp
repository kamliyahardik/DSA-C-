#include<iostream>
using namespace std;
class Vector{
    public : 
    int size ;
    int capacity;
    int*arr;

    Vector ()
    {
        size = 0;
        capacity = 0;
        arr = new int[1];
    }
    void add(int ele){
        if(size==capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for(int i =0 ;i<size;i++)
            {
                arr2[i]=arr[i];
            }
            arr = arr2;

        }
arr[size]=ele;
size++;
    } 
    int print (){
       for(int i =0 ;i<size;i++)
            {
               cout<<arr[i]<<" ";
            }
            cout<<endl;
    }
    
    int get (int idx)
    {
        if(size==0){cout<<"Array is Empty : "<<endl;
        return 0;
        }
        
    if(idx>=size || idx<0)
   { cout<<"Please enter valid index"<<endl;
   return 0;
   }
        return arr[idx];
    }

    int remove()
    {
        if(size==0){cout<<"Array is Empty : "<<endl;
        return 0;
        }
        size--;
    }
};

int main()
{
    Vector v1;
    v1.add(190);
    // v1.print();
     v1.add(48);
    // v1.print();
     v1.add(99);
    // v1.print();
    // cout<<v1.get(1)<<endl;

    v1.print();
    v1.remove();
    v1.print();

}