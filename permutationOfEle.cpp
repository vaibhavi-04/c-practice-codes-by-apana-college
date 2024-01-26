#include<bits/stdc++.h>
using namespace std;
/*in this method we can encounter same permutations if the elements are not distint */
vector<vector<int>> ans;
void permute(vector<int> &a, int id) {
    if(id == a.size()){
        ans.push_back(a);
        return ;

    }
    for(int i = id; i < a.size(); i++){
        swap(a[i],a[id]);
        permute(a,id+1);
        swap(a[i],a[id]);// Backtrack to the original state
    }
    return;
}
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i:arr){
        cin >> i;

    }
    permute(arr,0);
    for(auto v:ans){
        for(auto i: v){
            cout << i << " ";
        }
        cout << endl;
    }
}