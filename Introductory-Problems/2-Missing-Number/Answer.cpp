#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int> arr(n+1,0);
	int temp;
	for(int i=0;i<n-1;i++){
		cin>>temp;
		arr[temp]++;
	}
	for(int i=1;i<=n;i++){
		if(arr[i] == 0){
			cout<<i;
			break;
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
 
	int t = 1;
	//cin>>t;
	//int ca = 1;
	while(t-- > 0){
		solve();
		cout<<"\n";
	}
	return 0;
}