#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

vector<ll> dp(1000005,-1);
ll f(int n){
    if(n==0) return dp[n] =  1;
    if(dp[n] != -1) return dp[n];
    ll sum =0;
    for(int i=1;i<=6;i++){
        if(n-i <0) break;
        sum = (sum%mod + f(n-i) % mod)%mod;
    }
    return dp[n] = sum%mod;
}

ll fbu(int num){
    dp[0] = 1;
    for(int k=1; k<= num;k++ ){
        ll sum =0;
        for(int i=1; i<=6; i++) {
            if(k-i<0) break;
            sum = (sum%mod + dp[k-i]%mod)%mod;
        }
        dp[k] = sum%mod;
    }
    return dp[num];
}

int main() {
    int n;
    cin>>n;
    cout<<fbu(n);
    
}