#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	int n;
	cin >> n;

	int sum = 0;

	int a, b;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sum += a * b;
	}

	if (x == sum)
		cout << "Yes";
	else
		cout << "No";
}