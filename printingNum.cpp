#include<bits/stdc++.h>
using namespace std;
void indec(int n){
    if(n==0){
        return ;
    }
    cout << n<<" ";
    indec(n-1);

}
void inc(int n){
    if(n==0){
        return;
    }

   inc(n - 1);
   cout << n <<" ";

}
int main() {
    int n;
    cin >> n;
    indec(n);
    cout<<endl;
    inc(n);
    return 0;
}