#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset (int arr[],int n, vector<int> v, int idx, int k) {
    if(idx==n){
        if(v.size()==k){
            for(int i=0 ; i<v.size() ; i++) {
            cout<<v[i] <<" ";
            }
            cout<<endl;
        }
        
        return;
    }
    if(v.size()+(n-idx)<k) return;
    subset(arr,n,v,idx+1,k);
    v.push_back(arr[idx]);
    subset(arr,n,v,idx+1,k);
}
int main() {
    int arr[] ={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    subset(arr,n,v,0,3);
}