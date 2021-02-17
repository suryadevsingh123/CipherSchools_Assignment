#include <bits/stdc++.h>
using namespace std;

int buysell(int arr[], int l, int r)
{
	int profit(0), cp(0);
	if (r <= l)
		return 0;
	for (int i = l; i < r; i++) {
		for (int j = i + 1; j <= r; j++) {
			if (arr[j] > arr[i]) {
				cp = arr[j] - arr[i] + buysell(arr, l, i - 1) + buysell(arr, j + 1, r);
				profit = max(profit, cp);
			}
		}
	}
	return profit;
}

int main()
{
	int m;
	cin >> m;
	int arr[m];
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	cout << buysell(arr, 0, m - 1);

}

