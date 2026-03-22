#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

//display linked list using recursion
void display(Node* head) {
    if(head == NULL) return;
    cout<<head->val <<" ";
    display(head->next);
}

/*
// display linked list
void display(Node* head) {
    Node* temp = head;
    while(temp != NULL ){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
    */
//  find length of linked list using  iteration 

int size(Node* head){
    Node* temp = head;
    int n=0;
    while(temp != NULL){
        temp = temp->next;
        n++;
    }
    return n;
}

// find length of linked list using recursion
/*
int size(Node* head, int n) {
    if(head == NULL ) return n;
    size(head->next, n+1);
}
*/

// dispaly reversed linked list using recursion
void revDisplay(Node* head) {
    if(head == NULL) return;
    revDisplay(head->next);
    cout<<head->val <<" ";
}
void insertAtEnd(Node* head ,int  val){
    //iterative way
    /*
    Node* temp = new Node(val);
    while(head->next !=NULL) head = head->next;
    head=>next= temp ;
    */

    if(head->next == NULL){
        Node* temp = new Node(val);
        head->next = temp;
        return;
    }
    else {
        insertAtEnd(head->next,val);
    }
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    display(a);
    cout<<endl;
    //cout<<size(a,0) <<endl;
    revDisplay(a);
    cout<<endl;
    insertAtEnd(a,60);
    display(a);
    cout<<endl;;
    
    cout<<size(a) <<" " <<endl;
}