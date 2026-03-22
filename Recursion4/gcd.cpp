#include<iostream>
using namespace std; 

//recursion method
int hcf(int a, int b){
    if(a==0) return b;
    else return hcf(b%a,a);
}

//iteration method
/*
int hcf(int a, int b) {
    for(int i=min(a,b); i>=2; i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
    */
int main() {
    int a =6;
    int b=24;
    cout<<hcf(a,b);
}