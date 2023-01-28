#include <iostream>
using namespace std;

int main() {
	bool square[100][100] = { 0 };
	int n;
	cin >> n;
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				square[j][k] = true;
		
			}
		}
	}

	int count = 0;

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (square[i][j] == true) {
				count++;
			}
		}
	}

	cout << count;
}