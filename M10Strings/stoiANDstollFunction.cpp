#include <iostream>
#include <string>

using namespace std;
int main()
{
    // stoi() is for coverting string to integer
string s = "8772";
int x = stoi(s);
cout<<x+1;

// stoll() - covert string to long  long

string str = "298388298842";
long long a = stoll(str);
cout<<a+1;


}