#include<bits/stdc++.h>
using namespace std;
void reverses(string s,int n,int i){
    if(i==n){
        return ;
    }
    reverses(s,n,i+1);
    cout<<s[i];

}
int main(){
    string s;
    cin >> s;
    reverses(s,s.length(),0);
}