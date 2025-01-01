#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int query(int L, int R, const vector<vector<int>>& m) {
	int length = R - L + 1;
	int k = 0;
	while((1 << (k + 1)) <= length) {
		k++;
	}
	return min(m[L][k], m[R-(1<<k)+1][k]);
}

int main() {
    int n, q;
	cin >> n >> q;

	int log = 0;
	while((1 << log) <= n) log++;
	vector<int> a(n);
	vector<vector<int>> m(n, vector<int> (log));


	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m[i][0] = a[i];
	}

	for (int k = 1; k < log; k++) {
		for (int i = 0; i + (1 << k) <= n; i++) {
			m[i][k] = min(m[i][k-1], m[i + (1 << (k-1))][k-1]);
		}
	}
	for (int i = 0; i < q; i++) {
		int L, R;
		cin >> L >> R;
		cout << query(L-1, R-1, m) << "\n";
	}

	return 0;
}