#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string* str = new string[n];
	int* level = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> str[i] >> level[i];
	}
	
	int min_level = level[0];
	int index = 0;
	for (int i = 0; i < n; i++) {
		if (min_level > level[i]) {
			min_level = level[i];
			index = i;
		}
	}
	cout << str[index];
}