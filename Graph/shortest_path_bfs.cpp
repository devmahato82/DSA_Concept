#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
#include<climits>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;
void add_edge(int src,int dest,bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void bfs(int src, int dest, vector<int> &dist) {
    queue<int> q;
    dist.resize(v,INT_MAX);
    dist[src] =0;
    visited.insert(src);
    q.push(src);
    while(not q.empty()){
        int curr = q.front();
        q.pop();
        for(auto neighbour : graph[curr]){
            if(visited.find(neighbour) == visited.end()){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr]+1;
            }
        }
    }
}

int main(){
    cin>>v;
    graph.resize(v, list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    int a = INT_MAX;
    vector<int> dist;
    bfs(x,y,dist);
    for(auto path:dist){
         cout<<path<<" ";
    }
    return 0;

}