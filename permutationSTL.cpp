#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
/*in this method we do not  encounter same permutations if the elements are not distint */

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i:arr){
        cin >> i;

    }
    // permute(arr,0);
    sort(arr.begin(),arr.end());
    do {
        ans.push_back(arr);
    } while( next_permutation(arr.begin(),arr.end()));
    for(auto v:ans){
        for(auto i: v){
            cout << i << " ";
        }
        cout << endl;
    }
}