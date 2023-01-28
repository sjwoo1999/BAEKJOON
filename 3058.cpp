#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int arr[7];
		int sum = 0;
		int min = 0;

		for (int j = 0; j < 7; j++) {
			cin >> arr[j];
		}

		sort(arr, arr + 7);

		for (int k = 0; k < 7; k++) {
			if (arr[k] % 2 == 0) {
				sum += arr[k];
			}
		}

		for (int k = 0; k < 7; k++) {
			if (arr[k] % 2 == 0) {
				min = arr[k];
				break;
			}
		}
		
		cout << sum << ' ' << min << endl;
	}
}