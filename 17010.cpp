#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* num = new  int[n];
	char* ch = new char[n];

	for (int i = 0; i < n; i++) {
		cin >> num[i] >> ch[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < num[i]; j++)
			cout << ch[i];
		cout << endl;
	}
}