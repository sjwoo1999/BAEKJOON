#include <iostream>
using namespace std;

int main() {
	int n, layer = 0;
	cin >> n;
	for (int sum = 2; sum <= n; layer++)
		sum += 6 * layer;
	if (n == 1) layer = 1;
	cout << layer;
}