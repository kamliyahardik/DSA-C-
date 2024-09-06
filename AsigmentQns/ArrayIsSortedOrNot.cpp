#include <iostream>
using namespace std;
int main() {
int arr[6]={1,2,2,4,7,1};
for (int i = 1; i < 6; i++){
// Unsorted pair found
if (arr[i - 1] > arr[i]){
cout<<"No"<<endl;
return 0;
}
}
// No unsorted pair found
cout<<"yes"<<endl;
return 0;
}