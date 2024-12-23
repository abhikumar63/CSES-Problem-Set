#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    long long *arr = new long long[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long ans = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            ans += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout<<ans;
    delete[] arr;
    return 0;
}