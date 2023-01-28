#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {//2~n의 제곱근까지
		if (n % i == 0) {//i가 n의 약수라면 소수가 아니므로 false return
			return false;
		}
	}
	//2 ~ n-1까지 약수가 없다면 소수이므로, true return
	return true;
}

int main() {
	int m, n;
	cin >> m >> n;

	bool isFirst = true;
	int smallest_prime_number = -1;
	int sum = 0;

	for (int i = m; i <= n; i++) {
		if (isPrime(i) == true) {
			if (isFirst == true) {
				smallest_prime_number = i;
				isFirst = false;
			}
			sum += i;
		}
	}
	if (smallest_prime_number != -1)
		cout << sum << endl;
	cout << smallest_prime_number;
}