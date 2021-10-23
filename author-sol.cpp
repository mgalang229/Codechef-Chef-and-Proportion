#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int num[4];
	int perm[] = {0, 1, 2, 3};
	for (int i = 0; i < 4; i++) {
		cin >> num[i];
	}
	// view the image in this repository for better understanding
	// A more intelligent solution is to sort the four numbers and pair up the 
	// first 2 together and the last 2 together and check their ratios. This works 
	// because ratios are symmetric.
	// For checking the ratio equality, we can use an simple property that 
	// if a:b = c:d then a*d = b*c. This way, we can avoid dealing with floats.
	while (next_permutation(perm, perm + 4)) {
		if (num[perm[0]] * num[perm[3]] == num[perm[1]] * num[perm[2]]) {
			cout << "Possible" << '\n';
			return 0;
		}
	}
	cout << "Impossible" << '\n';
	return 0;
}
