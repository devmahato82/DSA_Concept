#include<iostream>
#include<stack>
using namespace std;

int main() {
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //previous greater element indez array
    int pgei[n];
    //using a stack : pop, ans , push & forward traverse
    //sc = O(n), TC: O(n)
    stack<int> st;
    pgei[0] = 1;
    st.push(0);
    for(int i=1; i<n; i++){
        while(st.size()>0 && arr[i]>= arr[st.top()]) {
            st.pop();
        } 
        if(st.size()==0) pgei[i] = -1;
        else pgei[i] = st.top();
        pgei[i] = i - pgei[i];
        st.push(i);
    }
    for(int i=0; i<n; i++){
        cout<<pgei[i]<<" ";
    }
    cout<<endl;

}