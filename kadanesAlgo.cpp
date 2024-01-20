#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
   
    
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < n; i++){
       
        currSum += a[i];
        if(currSum < 0){
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
   
    cout << maxSum;
    return 0;
}
