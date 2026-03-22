#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    int a_ka_public;
    A(){
        cout<<"A ka constructor call hua "<<endl;
    }
};

class B : virtual public A{
    public:
    int b_ka_public;
    B(){
        cout<<"B ka constructor call hua "<<endl;
    }
};

class C : virtual public A{
    public:
    int c_ka_public;
    C(){
        cout<<"C ka constructor call hua "<<endl;
    }
};

class D : public B, public C{
    public:
    int d_ka_public;
    D(){
        cout<<"D ka constructor call hua "<<endl;
    }
    void show(){
        cout<<a_ka_public<<endl;
    }
};

int main() {
    D d;
    d.a_ka_public = 10;
    d.show(); 
}