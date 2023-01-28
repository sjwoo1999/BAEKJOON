#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int arr[5] = { 0, };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++) {
		arr[i] = pow(arr[i], 2);
		sum += arr[i];
	}
	cout << sum%10;
}