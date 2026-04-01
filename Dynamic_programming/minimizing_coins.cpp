#include<bits/stdc++.h>
using namespace std;

vector<int> coins;
vector<int> dp(1000006,-2);
int f(int x){
    if(x<0) return INT_MAX;
    if(x==0) return 0;
    if(dp[x] != -2) return dp[x];
    int result = INT_MAX;
    for(int i=0; i<(int)coins.size(); i++){
        if(x-coins[i]<0) continue;
        result = min(result, f(x-coins[i]));
    }
    if(result == INT_MAX) return dp[x] =INT_MAX;
    return dp[x] = 1+result;
}

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n;i++){
        int nums;
        cin>>nums;
        coins.push_back(nums);
    }
    int ans = f(m);
    if(ans == INT_MAX) cout<<-1;
    else cout<< ans;
}