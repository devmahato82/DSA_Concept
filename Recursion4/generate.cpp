#include<iostream>
#include<string>
using namespace std;
void generate(string ans, int n) {
    if(ans.size()==n) {
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i] <<" ";
        }
        cout<<endl;
        return;
    }
    generate(ans+'0',n);
    if(ans=="" || ans[ans.length()-1]=='0') generate(ans+'1',n);

}

int main() {
    int n=3;
    generate("",n);
}