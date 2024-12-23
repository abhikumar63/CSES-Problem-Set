#include<iostream>
using namespace std;
void solve() {
	string s;
	cin >> s;
	int i = 0, j = 0;
	int maxm = 0;
	while (i < s.size()) {
		if(s[i]!=s[j])
			j=i;
		maxm = max(maxm, i-j+1);
		i++;
	}
	cout << maxm;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
	solve();
	return 0;
}