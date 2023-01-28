#include <iostream>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;

	if (h == 0) {
		if (m - 45 < 0) {
			h = 23;
			m = 60 - (45 - m);
		}
		else if (m - 45 == 0) {
			h = 0;
			m = 0;
		}
		else { // m - 45 > 0
			h = 0;
			m -= 45;
		}
	}
	else {
		if (m - 45 < 0) {
			h -= 1;
			m = 60 - (45 - m);
		}
		else if (m - 45 == 0) {
			m = 0;
		}
		else { // m - 45 > 0
			m -= 45;
		}
	}

	cout << h << ' ' << m;
}