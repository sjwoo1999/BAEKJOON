#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	cin.ignore();
	
	string* name = new string[n];

	for (int i = 0; i < n; i++) {
		getline(cin, name[i]);

		int g = 0, b = 0;

		for (int j = 0; j < name[i].length(); j++) {
			if (name[i][j] == 'G' || name[i][j] == 'g')
				g++;
			else if (name[i][j] == 'B' || name[i][j] == 'b')
				b++;
		}

		if (g > b) {
			cout << name[i] << " is GOOD" << endl;
		}
		else if (g == b) {
			cout << name[i] << " is NEUTRAL" << endl;
		}
		else if (g < b) {
			cout << name[i] << " is A BADDY" << endl;
		}
	}
}