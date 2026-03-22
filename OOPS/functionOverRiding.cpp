#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"Mai A ka show hai"<<endl;
    }
};
class B : public A{
    public:
    void show(){
        cout<<"Mai B ka show hu"<<endl;
    }
};


int main() {

    //accessing through scope resolution operator
    /*
    A a;
    a.show();
    B b;
    b.show();
    b.A::show();
    */

    //accessing through pointer
    B b;
    A *a;
    a = &b;
    a->show();

}