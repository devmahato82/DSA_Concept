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
class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val) {
        if(idx<0 || idx>size ) cout<<"Invalid Index" <<endl;
        else if(idx==0) insertAtHead(val); 
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1; i<=idx-1; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next->prev = t;
            temp->next = t;
            t->prev = temp;
            size++; 
        }
    }
    void deleteAtHead(){
        if(size==0) {
            cout<<"List is empty";
            return;
        }
        else{
            head = head->next;
            if(head != NULL) head->prev = NULL;
            else tail = NULL;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            tail->prev->next = NULL;
            tail = tail->prev;
            size--;
        }
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>size ) cout<<"Invalid Index" <<endl;
        else if(idx==0) deleteAtHead(); 
        else if(idx==size) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp= temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
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
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.display();
    list.insertAtHead(05);
    list.display();
    list.deleteAtHead();
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtIdx(2);
    list.display();

}