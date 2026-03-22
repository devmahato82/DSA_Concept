#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int arr[] = {19,12,23,8,16};
    int n = 5;
    for(int ele:arr){
        cout<<ele <<" ";
    }
    cout<<endl;
    vector<int> v(5,0);
    int count = 0;
    for(int i=0 ; i<n ; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0 ; j<n; j++){
            if(v[j]==1) continue;
            else{
                if(min>arr[j]) {
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        v[mindx] = 1;
        arr[mindx] = count;
        count++;
    }
    for(int ele:arr){
        cout<<ele <<" ";
    }
    cout<<endl;

}