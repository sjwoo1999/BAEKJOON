#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	while (true) {
		cin >> n;
		if (n == 0)
			break;
		string* word = new string[n];
		string* temp = new string[n];

		for (int i = 0; i < n; i++) {
			cin >> word[i];
			cin.ignore();

			temp[i] = word[i];

			for (int j = 0; j < temp[i].length(); j++) {
				if (temp[i][j] >= 97 && temp[i][j] <= 122)
					temp[i][j] -= 32;
			}

		}

		string smallest = temp[0];
		int index = 0;

		for (int i = 1; i < n; i++) {
			if (smallest.compare(temp[i]) > 0) {
				smallest = temp[i];
				index = i;
			}
		}

		cout << word[index] << endl;
	}
}