#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    vector<int> arr;
    int f;
    int b;
    int s;
    //int size;
    Queue(int val){
        f = 0;
        b = 0;
        s=0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val ) {
        if(b==arr.size()){
            cout<<"Queue is full "<<endl;
            return ;
        }
        arr[b] = val;
        b++;
        s++;
    }
    void pop() {
        if(s==0) {
            cout<<"Queue is empty"<<endl;
            return;
        }
        f++;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is full "<<endl;
            return -1;
        }
        return arr[f];
    }
    int back() {
        if(s==0){
            cout<<"Queue is full "<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size() {
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }

    void display(){
        for(int i=f; i<b; i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
};


int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.back()<<endl;
    q.display();
    cout<<q.size()<<endl;

}