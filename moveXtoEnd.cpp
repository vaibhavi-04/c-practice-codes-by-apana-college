#include<bits/stdc++.h>
using namespace std;
string movextoend(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = movextoend(s.substr(1));
    cout<<"-----------------///////////------------"<<endl;
    cout<<"ANs: "<<ans<<endl;
    if(ch=='x'){
        cout<<"s value : "<<s<<endl;
        cout<<"return value: "<<ans+ch<<endl;
        return (ans+ch);
        
    }
    else{
        cout<<"Ans "<<ans<<endl;
        return (ch+ans);
    }
    
}
int main(){
    string s;
    cin >> s;
    cout <<movextoend(s);
    return 0;
}