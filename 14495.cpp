#include <iostream>
using namespace std;

int main() {
	long long arr[117] = { 0,1,1,1 };
	for (int i = 3; i <= 116; i++)
		arr[i] = arr[i - 1] + arr[i - 3];
	int n;
	cin >> n;
	cout << arr[n] << endl;
}