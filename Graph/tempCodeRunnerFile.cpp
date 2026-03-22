#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
int v; // no of vertices;
void add_edge(int src, int dest, bool bidir = true){
    graph[src].push_back(dest);
    if(bidir) {
        graph[dest].push_back(src);
    }
}

void display(){
    for(int i=0; i<v;i++){
        cout<<i<<"---> ";
        for(auto neighbour: graph[i]){
            cout<<neighbour<< " ";
        }
        cout<<endl;
    }
}

bool bfs(int src){
    unordered_set<int> vis;
    queue<int> q;
    vector<int> parent(v,-1);
    q.push(src);
    vis.insert(src);
    while(q.size()>0){
        int node = q.front();
        q.pop();
        for(auto neighbour: graph[node]){
            if(vis.find(neighbour) == vis.end()){
                q.push(neighbour);
                vis.insert(neighbour);
                parent[neighbour] = node;
            }
            else{
                if(parent[neighbour]!=neighbour){
                    return true;
                }
            }
            
        }
    }
}
bool has_cycle(){
    bool result = false;
    for(int i=0; i<v; i++){
        result = bfs(i);
        if(result == true) return true;
    }
    return result;
}

int main(){
    cin>>v;
    graph.resize(v, list<int>());
    int e ;// no of edges;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }
    display();
    bool c = has_cycle();
    if(c == true) cout<<"Cyclic Graph"<<endl;
    else cout<<"Acyclic graph"<<endl;
    return 0;
}