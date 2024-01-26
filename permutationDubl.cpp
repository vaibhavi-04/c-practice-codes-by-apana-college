#include<bits/stdc++.h>
using namespace std;
/*in this method we can encounter same permutations if the elements are not distint */
vector<vector<int>> ans;
void helper(vector<int> &a,vector<vector<int>> &ans, int id) {
    if(id == a.size()){
        ans.push_back(a);
        return ;

    }
    for(int i = id; i < a.size(); i++){
        if(i != id && a[i] == a[id]){
            continue;
        }
        swap(a[i],a[id]);
        helper(a,ans, id+1);
        swap(a[i],a[id]);// Backtrack to the original state
    }
    return;
}
vector<vector<int>> permute(vector<int> arr){
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    helper(arr, ans, 0);
    return ans;
}
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i:arr){
        cin >> i;

    }
    vector<vector<int>> res = permute(arr);
    for(auto v:res){
        for(auto i: v){
            cout << i << " ";
        }
        cout << endl;
    }
}