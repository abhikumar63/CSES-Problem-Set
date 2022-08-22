#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	if(n<4 && n!=1) cout<<"NO SOLUTION";
	else{
		for(int i=n-1;i>0;i-=2){
			cout<<i<<" ";
		}
		for(int i=n;i>0;i-=2){
			cout<<i<<" ";
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