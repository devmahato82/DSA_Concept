#include<iostream>
#include<stack>
using namespace std;

void displayRev(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtBottom(stack<int>& st ,int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void pushAtIdx(stack<int>& st,int idx, int val){
    if(st.size()==idx) {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtIdx(st,idx,val);
    st.push(x);
}

void reverseStack(stack<int>& st) {
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st, x);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    cout<<endl;
    reverseStack(st);
    display(st);
    
}
