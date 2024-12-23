#include <iostream>
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	solve();
	return 0;
}