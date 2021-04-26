#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the array in non-decreasing order
	sort(a.begin(), a.end());
	int sum = 0;
	for (int i = 0; i < m; i++) {
		if (a[i] >= 0) {
			// if the current element is a positive number, then break the loop
			break;
		}
		// otherwise, add the current negative element in the 'sum' variable
		sum += a[i];
	}
	// print the absolute value of the 'sum'
	cout << -sum << '\n';
	return 0;
}
