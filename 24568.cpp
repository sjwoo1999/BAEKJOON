#include <iostream>
using namespace std;

int main() {
	int r, s;
	cin >> r >> s;
	int left = r * 8 + s * 3 - 28;
	if (left < 0) left = 0;
	cout << left;
}