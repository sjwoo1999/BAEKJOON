#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int data[], int size, int d) {
	int s = 0; // 시작
	int e = size - 1; // 끝
	int m;
	while (s <= e) {
		m = (s + e) / 2;
		if (data[m] == d) return m;
		else if (data[m] > d) e = m - 1;
		else s = m + 1;
	}
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int* given = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> given[i];
	}

	// 주어진 A[1], A[2], ... , A[N], 에 대하여 정렬을 수행한다.
	sort(given, given + n);

	int m;

	cin >> m;

	int* find = new int[m];

	for (int i = 0; i < m; i++) {
		cin >> find[i];
	}

	int* exist = new int[m];

	for (int i = 0; i < n; i++) {
		exist[i] = 0;
	}

	for (int i = 0; i < m; i++) {
		if (binarySearch(given, n, find[i]) != -1) {
			exist[i] = 1;
		}
	}

	for (int i = 0; i < m; i++) {
		cout << exist[i] << '\n';
	}
}