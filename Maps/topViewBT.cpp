#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

class Node{  // user defined data type
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void topView(Node* root){
    unordered_map<int, int> m;
    queue< pair<Node*,int> > q;
    pair<Node*, int> r;
    r.first = root;
    r.second = 0;
    q.push(r);
    while(q.size()>0){
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();
        while(q.size()>0){
            Node* temp = (q.front()).first;
            int level = (q.front()).second;
            q.pop();
            if(m.find(level) == m.end()){
                m[level] = temp->val;
            }
            if(temp->left != NULL) {
                pair<Node*, int> p;
                p.first = temp->left;
                p.second = level-1;
                q.push(p);
            }
            if(temp->right != NULL) {
                pair<Node*, int> p;
                p.first = temp->right;
                p.second = level+1;
                q.push(p);
            }
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    

}