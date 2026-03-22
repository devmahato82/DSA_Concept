#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Queue{
    public:
    Node*head;
    Node* tail;
    int length;
    Queue(){
        head = tail = NULL;
        length = 0;
    }
    void push(int val) {
        Node* temp = new Node(val);
        if(length==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp; 
        }
        length++;
    }
    void pop(){
        if(length==0) {
            cout<<"Queue is empty  "<<endl;
            return;
        }
        head = head->next;
        length--;
    }
    int front(){
        if(length==0) {
            cout<<"Queue is empty  ";
            return -1;
        }
        else{
            return head->val;
        }
    }
    int back(){
        if(length==0) {
            cout<<"Queue is empty  ";
            return -1;
        }
        else{
            return tail->val;
        }
    }
    int size() {
        return length;
    }
    bool empty(){
        if(length==0) return true;
        else return false;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        } 
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.display();
    q.push(25);

}