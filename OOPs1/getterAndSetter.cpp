#include<iostream>
using namespace std;
class Player {
    private:
    int score ;  // data members  ptivate
    int health ;  
 
    public:      // funtions members public

   void setScore(int s) {
    score = s;
   }
   void setHealth(int h){
    health = h;
   }
   int getScore (){
    return score;
   }
   int getHealth() {
    return health;
   }
   

};

int main(){

  Player sachin;
 sachin.setScore(12);
 sachin.setHealth(90);

 cout<<sachin.getScore()<<endl;
 cout<<sachin.getHealth()<<endl<<endl;

 sachin.setScore(180);
 cout<<sachin.getScore()<<endl;


}
