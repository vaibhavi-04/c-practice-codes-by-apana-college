#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    return (arr[0]< arr[1] && sorted(arr+1,n-1));

}
int main() {
    int n;
    cin >> n;
    int arr[] = {1,9,3,4,5};
    cout<<sorted(arr,n);
    return 0;
}