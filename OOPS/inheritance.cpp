#include<iostream>
#include<string>
using namespace std;

//inheritance
/*
class Vehicle{ //base class , parent class
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    Vehicle(){
        cout<<"Vehicle  ka constructor call hua hai"<<endl;
    }
    void showCompany(){
        cout<<companyName<<endl;
    }

};

class Car : public Vehicle{ //car inherits Vehicle
public:
    int steeringSize;
};

class Bike : public Vehicle{ //Derived class , child class
    public:
    int handleSize;
    Bike(){
        cout<<"Bike ka constructor call hua"<<endl;
    }
};
*/

class A{
private:  //private can't be accessed and inherited
    int a_ka_private;
protected:  //protected can't be accessed , can be inherited
    int a_ka_protected;
public: //public can be accessed and inherited
    int a_ka_public;
};

class B : public A{
public:
    int b_ka_public;
};



int main(){
    //inheritance
    /*
    Bike honda;
    honda.handleSize = 5;
    honda.tyreSize =10;
    honda.engineSize = 500;
    honda.companyName ="Honda";
    honda.showCompany();
    cout<<honda.tyreSize <<endl;
    */
    B b;
    b.b_ka_public =10;
}