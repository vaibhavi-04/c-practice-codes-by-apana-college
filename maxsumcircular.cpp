#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i =0 ; i< n;i++){
        cin >> a[i];
    }
    vector<int> dummy(n);
    int totalsum = 0, wrapsum =0;
    for(int i =0 ; i< n;i++){
        dummy[i] = -(a[i]);
        totalsum += a[i];
    }
    int currsum=0;
    int noncontributing=INT_MIN;
    for(int i = 0; i < n; i++){
        currsum += dummy[i];
        if(currsum < 0){
            currsum = 0;
        }
        noncontributing = max(currsum, noncontributing);
    }
    wrapsum = totalsum + noncontributing;
    cout << wrapsum<<endl;


} 