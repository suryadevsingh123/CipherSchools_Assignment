#include<bits/stdc++.h>
using namespace std;
int main() {
	int m;
	cin >> m;
	int *arr = new int(m);
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < m; i++) {
		cout << arr[i] << " ";
	}
}
