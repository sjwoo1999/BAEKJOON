#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* c = new int[n];
	int* k = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> c[i] >> k[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += c[i] * k[i];
	}
	cout << sum;
}