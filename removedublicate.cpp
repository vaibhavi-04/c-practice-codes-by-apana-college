#include<bits/stdc++.h>
using namespace std;
void removedublicate(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]==s[1]){
        
        removedublicate(s.substr(1));
    }else {
        cout<< s[0];
        removedublicate(s.substr(1));
    }
}
int main(){
    string s;
    cin >> s;
    removedublicate(s);
    return 0;
}