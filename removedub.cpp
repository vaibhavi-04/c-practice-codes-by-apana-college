#include<bits/stdc++.h>
using namespace std;
string removedublicate(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = removedublicate(s.substr(1));
    cout<<"----------string I have now "<<s<<endl;
    cout<<"ans I have now "<<ans<<endl;
    cout<<"character I have now "<<ch<<endl;
    if(ch==ans[0]){
        cout<<"removed "<<ans[0]<<endl;
        return ans;
    }else{
        return (ch+ans);
    }

}
int main(){
    string s;
    cin >> s;
    cout<<removedublicate(s);
    return 0;
}