#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>> gain(n,vector<int> (3));
    for(int i=0;i<n; i++){
        for(int j=0;j<3; j++){
            cin>>gain[i][j];
        }
    }
    vector<vector<int>> dp(n, vector<int>(3,-1));

    for(int j=0;j<3;j++){
        dp[0][j] = gain[0][j];
    }
    for(int i=1; i<n;i++){
        for(int j=0; j<3; j++){
            if(j==0) dp[i][j] = gain[i][j] + max(dp[i-1][1],dp[i-1][2]);
            if(j==1) dp[i][j] = gain[i][j] + max(dp[i-1][0],dp[i-1][2]);
            if(j==2) dp[i][j] = gain[i][j] + max(dp[i-1][1],dp[i-1][0]);
        }
    }
    int ans =  max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
    cout<<ans;
}