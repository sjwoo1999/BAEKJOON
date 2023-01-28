#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int** arr = new int*[n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[2];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i][0] >= arr[i][1])
			cout << "MMM BRAINS" << endl;
		else
			cout << "NO BRAINS" << endl;
	}
}