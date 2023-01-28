#include <iostream>
using namespace std;

void swap(int& val1, int& val2) {
	int temp = val1;
	val1 = val2;
	val2 = temp;
}

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int max = arr[0];
	int index = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				index = j;
			}
		}
	}
}