#include<iostream>
#include<string>
using namespace std;
void skipCharacter(string ans, string original, int idx) {
    if(original.length()==idx) {
        cout<<ans;
        return; 
    }
    char ch =  original[idx];
    if(ch =='a') {
        skipCharacter(ans,original,idx+1);
    }
    else skipCharacter(ans+ch, original,idx+1);
}
int main(){
    string str = "raghav garg";
    skipCharacter("",str,0);
}