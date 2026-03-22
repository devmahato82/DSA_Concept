#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int,int>
using namespace std;

vector<list<pair<int,int>>> graph;

void add_edge(int a, int b,int wt, bool bidir = true){
    graph[a].push_back({b, wt});
    if(bidir) {
        graph[b].push_back({a,wt});
    }
}

ll prims(int src, int n) {
    priority_queue<pp,vector<pp>, greater<pp> > pq; // {wt, node}
    unordered_set<int> vis;
    vector<int> par(n+1);
    unordered_map<int,int> mp;
    for(int i=1; i<=n; i++){
        mp[i] = INT_MAX;
    }
    pq.push({0,src});
    mp[src] = -1;
    int edgecount = 0; // 0 -> n-1
    int result =0;// sum of wt;
    while(edgecount < n && !pq.empty()){
        pp curr = pq.top();
        pq.pop();
        if(vis.count(curr.second)){
            continue;
        }
        vis.insert(curr.second);
        edgecount++;
        result += curr.first;
        for(auto neighbour: graph[curr.second]){
            if(!vis.count(neighbour.first) and mp[neighbour.first] > neighbour.second){
                pq.push({neighbour.second, neighbour.first});
                par[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second;
            }
        }
    }
    return result;
}

int main() {
    int n,m;
    cin>>n>>m;
    graph.resize(n+1, list<pair<int,int>>());
    while(m--){
        int u ,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    cout<<endl;
    cout<<prims(src,n);
}