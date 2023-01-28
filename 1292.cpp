#include <iostream>
using namespace std;

int main() {
	int a, b;

	int arr[1000];
	int index = 0;

	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < i; j++) {
			if (index < 1000) {
				arr[index] = i;
				index++;
			}
		}
	}

	int sum = 0;

	cin >> a >> b;

	for (int i = a - 1; i <= b - 1; i++) {
		sum += arr[i];
	}

	cout << sum;
}