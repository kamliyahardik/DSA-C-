#include<iostream>
using namespace std;
class Player {
    public:
    int score ;  // data members 
    int health ;  

    void showScore() {   // member functions
        cout<<"Score is : "<<score<<endl;
    }
     void showHealth() {
        cout<<"Score is : "<<health<<endl;
    }
};

int main(){

  Player sachin;
  sachin.score = 120;
  sachin.health = 100;
 sachin.showScore();
 sachin.showHealth();

}
