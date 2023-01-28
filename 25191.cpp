#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b;
	cin >> a >> b;

	cout << min(n, a/2 + b);
}