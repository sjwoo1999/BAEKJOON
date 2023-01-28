#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;

	int sum = 0;
	int min = 0;
	bool exist = false;

	for (int i = m; i <= n; i++) {
		int root = sqrt(i);

		if (root * root == i) {
			sum += i;

			if (exist == false) {
				min = i;
				exist = true;
			}
		}
	}

	if (exist == false)
		cout << -1;
	else
		cout << sum << endl << min;
}