#include<bits/stdc++.h>
using namespace std;
void permut(int b, int c, int a, int n, string s){
    if(n==0){
        cout << s <<endl;
    }
    if(b > 0){
        permut(b - 1, c, a, n - 1,s+"B");
    }
    if(c > 0){
        permut(b, c - 1, a, n - 1,s + "C");
    }
    if(a > 0){
        permut(b, c, a - 1, n - 1, s + "A");
    }
}
int main(){
    // int n;
    // cin >> n;
    // vector<int> arr(n);
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    int b,c,a,n;
    cin >> n >> b >> c >> a ;
    permut(b,c,a,n,"");
}