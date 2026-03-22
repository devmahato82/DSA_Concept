#include<iostream>
using namespace std;
int main() {
    int arr[] ={5,1,4,3,6,2};
    int n=6  ;
    cout<<"Before array sorted: \n";
    for(int i=0 ; i<n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    //Bubble sort
    // for(int i=0 ; i<n-1; i++){ //n-1 passes
    //     //traverse
    //     for(int j=0; j<n-1; j++){
    //         if(arr[j]>arr[j+1]) { //swap
    //             // int temp = arr[j];
    //             // arr[j] =arr[j+1];
    //             // arr[j+1] = temp;
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }


    //optimised bubble sort
    for(int i=0 ; i<n-1; i++){ //n-1 passes
        bool flag = true;
        //traverse
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]) { //swap
                // int temp = arr[j];
                // arr[j] =arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
                flag = false ;
            }
        }
        if(flag==true) break;
    }

    //print array
    cout<<"After array sorted: \n";
    for(int i=0 ; i<n; i++){
        cout<<arr[i] <<" ";
    }
}