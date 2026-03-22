#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int> &q) {
    int n = q.size();
    for(int i=0; i<n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverseQueue(queue<int> &q){
    //int n = q.size();
    stack<int> s;
    while(q.size()>0) {
        int x = q.front();
        s.push(x);
        q.pop();
    }
    while(s.size()>0){
        int x = s.top();
        q.push(x);
        s.pop();
    }
}

int main(){
    queue<int> q;
    //push
    //pop
    //front --> top
    //size , empty
    //back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    //cout<<q.size()<<endl;
    display(q);
    reverseQueue(q);
    display(q);

}