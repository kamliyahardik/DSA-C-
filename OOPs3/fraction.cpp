#include<iostream>
using namespace std;

class Fraction {
    public :
    int den;
    int num;
    
    Fraction (int num,int den)
    {
        this->num = num;
        this->den = den;
        
    }

    void display()
    {
        cout<<num << " / " << den<<endl;
    }

Fraction add( Fraction f)
{
      int newNum = this->den*f.num  + this->num*f.den;
      int newDen = this->den*f.den;
      Fraction ans(newNum,newDen);
      return ans;
}

};

int main()
{
  Fraction f1(1,3);
  Fraction f2(2,4);
  f1.display();
  f2.display();

  Fraction f3 = f1.add(f2);
  cout<<f3<<endl;

f3.display();
}