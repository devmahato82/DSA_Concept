#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&parent, int x){
    return parent[x] = (parent[x]==x) ? x: find(parent,parent[x]);
}

bool Union(vector<int>&parent, vector<int> &rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);
    if(a==b) return true;
    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;
    }
    else{
        rank[b]++;
        parent[a]=b;
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>parent(n+1);
    vector<int>rank(n+1,0);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    while(m--){
        int a, b;
        cin>>a>>b;
        bool c = Union(parent,rank,a,b);
        if(c==true) cout<<"Cycle Detected\n";
    }
}
