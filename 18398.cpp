#include <iostream>
using namespace std;

int main() {
	int t;
	int n;
	int *x, *y;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		x = new int[n];
		y = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> x[j] >> y[j];
		}

		for (int j = 0; j < n; j++) {
			cout << x[j] + y[j] << ' ' << x[j] * y[j] << endl;
		}
	}
}