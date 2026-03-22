#include<iostream>
using namespace std;

class Stack{ //user defined data structure
public:
    int arr[5];
    int idx;
    Stack(){
        idx = -1;
    }
    void push(int val) {
        if(idx== sizeof(arr)/sizeof(arr[0]) -1 ){
            cout<<"stack is overflow"<<endl ;
            return;
        }
        else{
            idx++;
            arr[idx] = val;
        }
    }
    void pop() {
        if(idx==-1) {
            cout<<"stack is underflow"<<endl;
        }
        else{
            idx--;
        }
    }
    int top() {
        if(idx==-1){
            cout<<"stack is underflow"<<endl;
            return -1 ;
        }
        else{
            return arr[idx];
        }
    }
    int size(){
        return idx+1;
    }
    void display() {
        if(idx==-1){
            return;
        }
        for(int i=0; i<=idx; i++){
            cout<<arr[i] <<" ";
        }
        cout<<endl;
    }

};

int main() {
    Stack st;
    st.display();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.pop();
    cout<<st.size()<<endl;
    st.display();
    cout<<st.top()<<endl;

}