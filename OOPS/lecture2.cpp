#include<iostream>
#include<string>
using namespace std;

class Gun{
public:
    int ammo;
    int damage;
    int scope;
};

class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    
public:
//setter
    void setHealth(int health) {
        this->health = health;
    }
    void setAge(int age ){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
    void setGun(Gun gun ){
        this->gun = gun;
    }
// getter
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool getIsAlive() {
        return alive;
    }
    Gun getGun(){
        return gun;
    }
};

int addScore(Player a, Player b){
    return a.getScore()+b.getScore();
}

Player getMaxScorePlayer(Player a , Player b){
    if(a.getScore() > b.getScore()) return a ;
    else return b;
}

int main(){

    Player harsh;// object creation , statically
    Player raghav; //compile time , static allocation

    Player *urvi = new Player; //run time , dynamic memory allocation
    //Player urviObject = *urvi;

    Gun akm;
    akm.ammo(100);
    akm.damage(50);
    akm.scope(2);

    Gun awm;
    awm.ammo(15);
    awm.damage(150);
    awm.scope(8);

    harsh.setAge(21);
    harsh.setHealth(100);
    harsh.setIsAlive(true);
    harsh.setScore(70);
    harsh.setGun(gun);


    raghav.setAge(22);
    raghav.setHealth(20);
    raghav.setIsAlive(true);
    raghav.setScore(100);
    raghav.setGun(awm);

    urvi->setScore(40);
    urvi->setAge(90);
    cout<<urvi->getScore()<<endl;

    cout<<addScore(harsh, raghav)<<endl;
    Player sanket = getMaxScorePlayer(harsh,raghav);
    cout<<sanket.getScore();

}