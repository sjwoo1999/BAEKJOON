#include <iostream>
#include <string>
using namespace std;


int main() {
	int n;
	cin >> n;
	for (int t = 0; t < n; t++) {
		string s;
		cin >> s;
		cout << "String #" << t + 1 << '\n';
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != 90) cout << (char)(s[i] + 1);
			else cout << 'A';
		}
		cout << "\n\n";
	}
	return 0;
}