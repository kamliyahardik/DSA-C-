/* break statement */

#include<iostream>
using namespace std;
int main (){
    
int n;
cout<<"enter the nummber :";
cin>>n;


bool isPrime = true ;
for(int i=2;i<=n-1;i++)
{
    if(n%i==0){
        isPrime = false;
        break; 
        
    }
}
if(n==1){
    cout<<n << " not prime nither composite";
}
else if(isPrime){
    cout<<n<< " is prime number"<<endl;
}
 
else{
    cout<<n<<" is composite number "<<endl;
}
}