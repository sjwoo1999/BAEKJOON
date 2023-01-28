#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long* sum = new long long[n];
	long long* val1 = new long long[n];
	long long* val2 = new long long[n];

	for (int i = 0; i < n; i++) {
		cin >> val1[i] >> val2[i];
		sum[i] = val1[i] + val2[i];
	}

	for (int i = 0; i < n; i++) {
		cout << sum[i] << endl;
	}
}