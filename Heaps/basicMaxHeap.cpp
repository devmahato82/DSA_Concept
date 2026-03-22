#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max Heap
    /*
    priority_queue<int> pq; //max heap
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(1);
    cout<<"Top element: "<<pq.top()<<endl; //8
    pq.pop();
    cout<<"Top element after pop: "<<pq.top()<<endl; //5

    */

    //min heap
    priority_queue<int, vector<int>, greater<int>> pq; //min heap
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(1);
    cout<<"Top element: "<<pq.top()<<endl; //1
    pq.pop();
    cout<<"Top element after pop: "<<pq.top()<<endl; //2 
}