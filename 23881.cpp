#include <iostream>
#include <algorithm>
using namespace std;

void selection_sort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		int min = arr[i];
		int location = i;
		for (int j = i + 1; j < size; j++) {
			if (min > arr[j]) {
				min = arr[j];
				location = j;
			}
		}
		swap(arr[i], arr[location]);
	}
}

int main() {
	int n, k;
	cin >> n >> k;

	int* arr = new int[n];
}