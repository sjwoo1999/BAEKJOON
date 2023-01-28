#include <iostream>
using namespace std;

bool isMultiple(int num, int n) {
	if (num % n == 0) return true;
	else return false;
}

int main() {
	int n;
	cin >> n;

	while (true) {
		int num;
		cin >> num;
		
		if (num == 0) break;

		if (isMultiple(num, n) == true)
			cout << num << " is a multiple of " << n << "." << endl;
		else
			cout << num << " is NOT a multiple of " << n << "." << endl;
	}
}