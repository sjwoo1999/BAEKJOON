#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << ((a % 2) < b) ? a % 2 : b;
}