#include<bits/stdc++.h>
using namespace std;
int findpos(vector<int> &count,int val){
    count[val]--;
    return count[val];
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int mx= INT_MIN;
    for(int i = 0; i< n; i++){
        cin >> arr[i];
        mx = max(arr[i], mx);
    }
    vector<int > count(mx+1);
    for(int i =0 ; i < n; i++){
        count[arr[i]]++;
    }
    for(int i=1 ;i<=mx;i++){
        count[i] = count[i] + count[ i - 1];
    }
    vector<int> ans(n);
    for(int i = n-1; i >= 0; i--){
        int p = findpos(count, arr[i]);
        ans[p] = arr[i];
    }
    for(int i: ans){
        cout << i << " ";
    }
}