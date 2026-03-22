#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preOrder(Node* root) {
    if(root == NULL) return;
    cout<<root->val<<"  ";//root
    preOrder(root->left); //left
    preOrder(root->right); //right
}
void inOrder(Node* root) {
    if(root == NULL) return;
    inOrder(root->left); //left
    cout<<root->val<<"  ";  //root
    inOrder(root->right); //right
}
void postOrder(Node* root) {
    if(root == NULL) return;
    postOrder(root->left); //left
    postOrder(root->right); //right
    cout<<root->val<<"  ";  //root
}
int main() {
    Node* a = new Node(1); //root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    preOrder(a);
    

}