#include<bits/stdc++.h>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int k;
	cin >> k;
	int arr[m][n];
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == k) {
				cout << i << " " << j << "\n";
				return 1;
			}
		}

	}
}
