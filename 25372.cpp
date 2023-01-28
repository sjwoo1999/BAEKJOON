#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s.length() >= 6 && s.length() <= 9)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}