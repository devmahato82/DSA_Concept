#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[7] ={0,1,3,4,8,9,12};
    int n=7;
    

    for(int ele:arr){
        cout<<ele <<" ";
    }
    cout<<endl;
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    
    while(lo<=hi) {
        int mid = lo+ (hi-lo)/2;
        if(arr[mid]==mid){
            lo=mid+1;
        }
        else {
            ans = mid;
            hi = mid-1;
        }
        
    }
    cout<<ans;
}