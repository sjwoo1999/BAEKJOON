#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string* str = new string[n];
	int* num = new int[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> str[i];
		cin.ignore();
		str[i].erase(0, 2);
		num[i] = stoi(str[i]);

		if (num[i] <= 90)
			count++;
	}
	cout << count;
}