#include<iostream>
using namespace std;
int powLog(int x, int n){
    int ans;
    if(n==0) return 1;
    else if(n%2==0){
        ans = powLog(x,n/2)*powLog(x,n/2);
    }
    else{
        ans = powLog(x,n/2)*powLog(x,n/2)*x;
    }
    return ans;
}
int pow(int x, int n ){
    if(n==0) return 1;
    return x*pow(x,n-1);
}

int main(){
    cout<<pow(2,3)<<endl;
    cout<<powLog(2,9);
} 