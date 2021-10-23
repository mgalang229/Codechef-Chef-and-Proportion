#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n = 4;
	vector<double> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// shuffle the sequence (permutation) and check if whether we can make a ratio of
	// x : y equal to that of z : w using a sequence of x, y, z, w
	sort(a.begin(), a.end());
	bool checker = false;
	do {
		// adjacent
		checker |= (a[0] / a[1] == a[2] / a[3]);
		checker |= (a[1] / a[0] == a[3] / a[2]);
		// alternating
		checker |= (a[0] / a[2] == a[1] / a[3]);
		checker |= (a[2] / a[0] == a[3] / a[1]);
		// palindrome-like
		checker |= (a[0] / a[3] == a[1] / a[2]);
		checker |= (a[3] / a[0] == a[2] / a[1]);
		if (checker) {
			break;
		}
	} while (next_permutation(a.begin(), a.end()));
	cout << (checker ? "Possible" : "Impossible") << '\n';
	return 0;
}
