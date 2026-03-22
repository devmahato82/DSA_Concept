#include<iostream>
#include<string>
using namespace std;

class Bike{
    public:
    int tyreSize;
    int engineSize;

    //contructor overloading 
    Bike (int tS, int eS) : tyreSize(tS), engineSize(eS){};
    Bike (int tS) : tyreSize(tS), engineSize(100){};
    Bike(): tyreSize(12), engineSize(100);

}

// function  overloading 
void add(int a, int b){
    cout<<a+b<<endl;
}
void add(int a){
    cout<<10+a<<endl;
}

int main() {
    add(1,2);
    add(5);
}