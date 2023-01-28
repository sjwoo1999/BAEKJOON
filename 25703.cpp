#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	cout << "int a;" << endl;

	for (int i = 0; i < n; i++) {
		cout << "int ";
		for (int j = 0; j < i+1; j++) {
			cout << "*";
		}

		if (i + 1 == 1)
			cout << "ptr = &a;";
		else if (i + 1 == 2)
			cout << "ptr" << i + 1 << " = &ptr;";
		else
			cout << "ptr" << i + 1 << " = &ptr" << i << ";";

		cout << endl;
	}
}