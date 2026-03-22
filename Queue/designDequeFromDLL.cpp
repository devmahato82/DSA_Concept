#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque{
    public:
    Node* head;
    Node* tail;
    int s; //size
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void push_back(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        s++;
    }
    void push_front(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
        s++;
    }
    
    void pop_front(){
        if(s==0) {
            cout<<"List is empty";
            return;
        }
        else{
            head = head->next;
            if(head != NULL) head->prev = NULL;
            else head = tail = NULL;
            s--;
        }
    }
    void pop_back(){
        if(s==0){
            cout<<"List is empty";
            return;
        }
        else if(s==1){
            head = tail = NULL;
            s--;
        }
        else{
            tail->prev->next = NULL;
            tail = tail->prev;
            s--;
        }
    }
    int front(){
        if(s==0) {
            cout<<"Deque is empty ";
            return -1;
        }
        else return head->val;
    }
    int back(){
        if(s==0) {
            cout<<"Deque is empty ";
            return -1;
        }
        else return tail->val;
    }
    int size(){
        return s;
    }
    void display(){
        Node* temp = head;
        while(temp) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Deque dq;
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushback(40);
    dq.display();
    dq.popback();
    dq.display();
    dq.pushfront(05);
    dq.pushback(100);
    dq.display();

}