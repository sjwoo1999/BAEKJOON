#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	while (true) {
		cin >> n;
		if (n == -1) break;
		sum += n;
	}
	cout << sum;
}