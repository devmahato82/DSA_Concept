#include<iostream>
using namespace std;
int main() {
    int arr[9] ={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=21;

    for(int ele:arr){
        cout<<ele <<" ";
    }
    cout<<endl;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi) {
        int mid = lo+ (hi-lo)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<"upper bound of "<<x <<" is "<<arr[mid+1];
            break;
        }
        else if(arr[mid]>x) hi = mid-1;
        else lo = mid+1;
    }
    if(flag == false ){
        cout<<"upper bound of "<<x <<" is "<<arr[lo];
    }
}