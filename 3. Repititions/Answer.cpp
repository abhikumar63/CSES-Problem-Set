#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int i=0,j=0;
	int maxm=0;
	while(i<s.size()){
		if(s[i]!=s[j])
			j=i;
		maxm = max(maxm,i-j+1);
		i++;
	}
	cout<<maxm;
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