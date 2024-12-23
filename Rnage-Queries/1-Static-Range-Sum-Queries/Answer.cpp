#include <iostream>
#include <vector>
using namespace std;

void solve() {
	int n, q;
	cin >> n >> q;
	vector<int> v(n);

	vector<long long> pre(n+1);
	long long sum = 0;
	pre[0] = sum;
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
		pre[i + 1] = sum;
	}

	int start, end;
	while (q--) {
		cin >> start >> end;
		cout << pre[end] - pre[start - 1] << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}