#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string str;

	int a, b;

	int i = 1;

	while (true) {
		cin >> a >> str >> b;
		
		if (str == "E") break;

		cout << "Case " << i << ": ";

		if (str == ">") {
			if (a > b)
				cout << "true" << endl;
			else
				cout << "false" << endl;
		}
		else if (str == ">=") {
			if (a >= b)
				cout << "true" << endl;
			else
				cout << "false" << endl;
		}
		else if (str == "<") {
			if (a < b)
				cout << "true" << endl;
			else
				cout << "false" << endl;
		}
		else if (str == "<=") {
			if (a <= b)
				cout << "true" << endl;
			else
				cout << "false" << endl;
		}
		else if (str == "==") {
			if (a == b)
				cout << "true" << endl;
			else
				cout << "false" << endl;
		}
		else if (str == "!=") {
			if (a != b)
				cout << "true" << endl;
			else
				cout << "false" << endl;
		}

		i++;
	}
}