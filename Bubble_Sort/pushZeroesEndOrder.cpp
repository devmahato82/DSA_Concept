#include<iostream>
using namespace std;
int main() {
    int arr[] ={5,0,1,2,0,0,4,0,3};
    int n= 9 ;
    cout<<"Before array : \n";
    for(int i=0 ; i<n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;

    for(int i=0 ; i<n-1; i++){ //n-1 passes
        //traverse
        for(int j=0; j<n-1; j++){
            if(arr[j]==0) { //swap
                swap(arr[j],arr[j+1]);
            }
        }
    }

    //print array
    cout<<"After array sorted: \n";
    for(int i=0 ; i<n; i++){
        cout<<arr[i] <<" ";
    }
}