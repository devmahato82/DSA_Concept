#include<iostream>
#include<string>
using namespace std;

class Bike{
public:
    static int noOfBikes; //this belongs to the class
    int tyreSize;
    int engineSize;

    //default constructor
    Bike() {
        cout<<"Default Constructor call hua"<<endl;
    }

    //parameterized constructor
    Bike (int tyreSize, int engineSize=200){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout<<"parameterized Constructor call hua"<<endl;
    }

    //Destructor
    ~Bike(){
        cout<<"Destructor call hua"<<endl;
    }
};
int Bike::noOfBikes = 10;
int main() {
    //Default constructor
    // Bike tvs;
    // Bike honda;
    // Bike Bullet;

    //parameterized constructor
    Bike tvs(12,100);
    Bike honda(13,150);
    Bike Bullet(15,350);
    Bike bajaj(13);
    bool flag = true;
    if(flag==true) {
        Bike bmw(17,1000);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    }

    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<" " <<tvs.noOfBikes<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<Bullet.tyreSize<<" "<<Bullet.engineSize<<endl;
}