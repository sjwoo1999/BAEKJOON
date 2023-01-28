#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int* score = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	sort(score, score + n, greater<int>());

	cout << score[k-1];
}