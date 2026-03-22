#include<iostream>
#using namespace std;
#include<queue>
int main(){
    int arr[] = {10,20,-4,5,15,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    priority_queue<int> pq; //max heap
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    cout<<"Kth smallest element is: "<<pq.top()<<endl;
}