#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int n;
	cin >> n;
	string* arr = new string[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (str == arr[i])
			count++;
	}
	cout << count;
}