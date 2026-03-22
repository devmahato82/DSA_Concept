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

unordered_map<int,int> Dijkstra(int src, int n) {
    priority_queue<pp,vector<pp>, greater<pp> > pq; // {wt, node}
    unordered_set<int> vis;
    vector<int> via(n+1);
    unordered_map<int,int> mp; // {node , distance weight}
    for(int i=0; i<n; i++){
        mp[i] = INT_MAX;
    }
    pq.push({0,src});
    mp[src] = 0;
    while(!pq.empty()){
        pp curr = pq.top();
        pq.pop();
        if(vis.count(curr.second)){
            continue;
        }
        vis.insert(curr.second);
        for(auto neighbour: graph[curr.second]){
            if(!vis.count(neighbour.first) and mp[neighbour.first] > mp[curr.second] + neighbour.second){
                pq.push({neighbour.second+mp[curr.second], neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second+mp[curr.second];
            }
        }
    }
    return mp;
}

int main() {
    int n,m;
    cin>>n>>m;
    graph.resize(n, list<pair<int,int>>());
    while(m--){
        int u ,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    unordered_map<int,int> sp = Dijkstra(src,n);
    for(auto p:sp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    int dest;
    cin>>dest;
    cout<<sp[dest]<<"\n";
    return 0;

}