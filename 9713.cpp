#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	
	int* sum_arr = new int[n];

	for (int i = 0; i < n; i++)
		sum_arr[i] = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		for (int j = 0; j <= arr[i]; j++) {
			if (j % 2 == 1)
				sum_arr[i] += j;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << sum_arr[i] << endl;
	}
}