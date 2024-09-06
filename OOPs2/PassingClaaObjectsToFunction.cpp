#include<iostream>
using namespace std;
class Player {
    private:
int health ;
int age;
int score;
bool alive;

public:
void setScore(int score)
{
    this->score = score;
}
void setAge(int age)
{
    this->age = age;
}
void setHealth(int health)
{
    this->health = health;
}
void setAlive(bool alive)
{
    this->alive = alive;
}

int getScore()
{
    return score;
}
int getAge()
{
   return age;
}
int getHealth()
{
    return health;
}
bool getAlive()
{
    return alive;
}
};

int addScore(Player a,Player b){
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b)
{
    if(a.getScore()>b.getScore())
    {
        return a;
    }
    else {
        return b;
    }
}
int main()
{
    Player hardik;  // Object creation Statically
Player bhavik;  // Compile time,Static allocation

Player *dhaval = new Player;    // Runtime,Dynamic allocation using pointers 
// Player dhavalObject = *dhaval;

hardik.setScore(200);
hardik.setAge(21);
hardik.setHealth(99);
hardik.setAlive(true);

bhavik.setScore(210);
bhavik.setAge(20);
bhavik.setHealth(100);
bhavik.setAlive(true);

dhaval->setScore(129);    // ( -> ) means point addres value
cout<<dhaval->getScore()<<endl;
// dhavalObject.setScore(780);
// cout<<dhavalObject.getScore()<<endl;

cout<<addScore(hardik,bhavik);
cout<<endl;
Player suresh = getMaxScorePlayer(hardik,bhavik);
cout<<suresh.getScore()<<endl;




}