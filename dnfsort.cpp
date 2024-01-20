#include<bits/stdc++.h>
using namespace std;
void swap(vector<int> &arr, int l, int h){
    int temp = arr[l];
    arr[l] = arr[h];
    arr[h] = temp;
    return;
}
void dnfsort(vector<int> &arr, int n){
    int low = 0;
    int mid=0;
    int hi = n - 1;
    while(mid <= hi){
        if(arr[mid] == 0){
            swap(arr,mid,low);
            low++; mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr,hi,mid);
            hi--;
        }
    }

}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    dnfsort(arr,n);
    for(int i: arr){
        cout << i << " ";
    }
    return 0;
 
    
}