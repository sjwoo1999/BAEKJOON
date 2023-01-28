#include <iostream>
using namespace std;

bool isHan(int n) {
	if (1 <= n && n < 100)
		return true;
	else if (100 <= n && n < 1000) {
		int hundred;
		int ten;
		int one;
		hundred = n / 100;
		ten = (n % 100) / 10;
		one = (n % 100) % 10;
		if (hundred - ten == ten - one) {
			return true;
		}
		else {
			return false;
		}
	}
	else if (n == 1000)
		return false;
}

int main() {
	int n;
	cin >> n;
	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (isHan(i))
			count++;
	}

	cout << count;
}