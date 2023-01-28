#include <iostream>
using namespace std;

int main() {
	int arr[3];
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	
	int min = arr[0];
	for (int i = 0; i < 3; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	int max = arr[0];
	for (int i = 0; i < 3; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	int mid = arr[0];
	for (int i = 0; i < 3; i++) {
		if (arr[i] != min && arr[i] != max)
			mid = arr[i];
	}
	cout << min << ' ' << mid << ' ' << max;
}