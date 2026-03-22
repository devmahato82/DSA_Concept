#include<iostream>
#include<vector>
#include<string>
using namespace std;
void stringSubsets(string ans, string str, vector<string>&v) {
    if(str == "") {
        v.push_back(ans);
        //cout<<ans <<endl;
        return;
    }
    char ch = str[0];
    stringSubsets(ans+ch,str.substr(1),v);
    stringSubsets(ans,str.substr(1),v);
}
int main() {
    string str = "abc";
    vector<string> v;
    stringSubsets("",str , v);
    for(string el:v){
        cout<<el<<" ";
    }
}