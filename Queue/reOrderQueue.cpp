#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverse(queue<int>& q){
    stack<int> s;
    while(q.size()>0){
        s.push(q.front());
        q.pop();
    }
    while(s.size()>0){
        q.push(s.top());
        s.pop();
    }
}
void reorder(queue<int>& q){
    stack<int> st;
    int n = q.size(); //even length

    //pop 1st of the queue to the stack
    for(int i=1; i<=n/2; i++){
        st.push(q.front());
        q.pop();
    }
    //empty the stack into queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //pop the second half (now the first) of the q to the q
    for(int i=1; i<=n/2; i++){
        st.push(q.front());
        q.pop();
    }
    // Most important step (interleave one by one)
    while(st.size()>0) {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    reverse(q);
}


void display(queue<int> q) {
    int n = q.size();
    for(int i=1; i<=n; i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main() {
    //queue = 1 2 3 4 5 6 7 8 
    //ans = 1 5 2 6 3 7 4 8
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
}