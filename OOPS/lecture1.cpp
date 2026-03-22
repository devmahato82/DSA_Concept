#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
    int health;
    int score;
    
    public:
    //setter
    void setScore(int s) {
        score = s;
    }
    void setHealth(int h){
        health = h;
    }
    //getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main() {
    Player harsh;
    harsh.setScore(9);
    harsh.getHealth(10);

    cout<<harsh.getScore();
    cout<<harsh.getHealth();
    

}