#include<iostream>
#include<string>
using namespace std;

//recursion method
bool isPalindrome(string s, int i, int j){
    if(i>=j) return true;
    else if(s[i]!=s[j]) return false;
    else return isPalindrome(s,i+1,j-1);
}
//iterative method
/*
bool isPalindrome(string s) {
    int i =0;
    int j=s.length()-1;
    while(i<=j) {
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
    
}
    */
int main() {
    string s = "dev";
    // cout<<isPalindrome(s);
    cout<<isPalindrome(s,0,s.length()-1);
}