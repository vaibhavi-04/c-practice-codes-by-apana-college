#include<bits/stdc++.h>
using namespace std;
void generatesubstr(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    
    char ch =s[0];
    string ros= s.substr(1);
    generatesubstr(ros,ans);
    generatesubstr(ros,ans+ch);
    
}
int main(){
    string s;
    cin >> s;
    generatesubstr(s,"");
    return 0;
}