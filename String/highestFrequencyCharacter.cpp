#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main() {
    string s = "dev kumar mahato";
    int maxcount = 0;
    int n = s.length();
    for(int i=0 ; i<n; i++){
        int count = 0 ;
        for (int j=i ; j<n ; j++) {
            if (s[i]== s[j]) count++;
        }
        if(count > maxcount) maxcount = count;
    }
    for(int i=0 ; i<n; i++){
        int count = 0 ;
        for (int j=i ; j<n ; j++) {
            if (s[i]== s[j]) count++;
        }
        if(count == maxcount) 
        cout<<s[i] <<" " <<maxcount;
    }
    

}
