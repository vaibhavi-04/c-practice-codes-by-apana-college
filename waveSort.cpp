#include<bits/stdc++.h>
using namespace std;
void swap(vector<int> &arr, int l, int h){
    int temp = arr[l];
    arr[l] = arr[h];
    arr[h] = temp;
    return;
}
void wavesort(vector<int> &arr, int n){
    int i = 1;
    while(i<n){
        if(arr[i] > arr[i - 1]){
            swap(arr,i,i - 1);
        }
        if(arr[i] > arr[i + 1] && i <( n - 1)){
            swap(arr, i + 1, i);
        }
        i += 2;
    }

}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    wavesort(arr,n);
    for(int i: arr){
        cout << i << " ";
    }
    return 0;
 
    
}