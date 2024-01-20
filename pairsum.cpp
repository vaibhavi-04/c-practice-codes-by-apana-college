#include<bits/stdc++.h>
using namespace std;

bool pairsum(vector<int> a, int n, int k){
    int lw = 0 , hi = n - 1;
    
    while(lw <= hi){
        int sum = 0;
        sum = a[lw] + a[hi];
        if (sum == k){
            cout <<"lw:"<<lw<<" hi:"<<hi<<endl;
            return true;
        }
        else if(sum > k){
            hi--;
        }
        else{
            lw++;
        }

    } 
    return false;
    
}
int main(){
    int n, k;
    cin >> n >>k;
    vector<int> a(n);
    for(int i =0 ; i< n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << pairsum(a,n,k);
    return 0;



} 