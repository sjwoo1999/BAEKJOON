#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long num[5];
	long long sum = 0;

	num[0] = n / 10000;
	n = n - (n / 10000) * 10000;
	num[1] = n / 1000;
	n = n - (n / 1000) * 1000;
	num[2] = n / 100;
	n = n - (n / 100) * 100;
	num[3] = n / 10;
	n = n - (n / 10) * 10;
	num[4] = n;

	for (int i = 0; i < 5; i++) {
		num[i] = pow(num[i], 5);
		sum += num[i];
	}

	cout << sum;
}