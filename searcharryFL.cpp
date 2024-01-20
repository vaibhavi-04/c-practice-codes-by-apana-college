#include<bits/stdc++.h>
using namespace std;
int firstocc(int arr[],int n,int i,int k){
    if(i==n){
        return -1;
    }
    if(arr[i]==k){
        return i;
    }
    firstocc(arr,n,i+1,k);
}
int lastocc(int arr[], int n, int i,int k){
    if(i<0){
        return -1;
    }
    if(arr[i]==k){
        return i;
    }
   
    return lastocc(arr,n,i-1,k);
}
int lastocc2(int arr[], int n, int i,int k){
    if(i==n){
        return -1;
    }
    int restarr = lastocc2(arr,n,i+1,k);
    // cout<<i<<" "<<restarr<<endl;
    if(restarr!=-1){
        // cout<<"  in the loop when restaay != -1 : "<<restarr<<endl;
        return restarr;
    }
    if(arr[i]==k){
        return i;
    }
    return -1;
    
}
int main() {
    // int n;
    // cin >> n;
    int arr[] = {1,5,3,5,4};
    cout << firstocc(arr,5,0,5)<<" ";
    cout << lastocc(arr,5,5-1,5)<<" ";
    cout << lastocc2(arr,5,0,5)<<" ";
    return 0;
}