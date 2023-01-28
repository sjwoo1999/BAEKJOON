#include <iostream>
#include <string>
using namespace std;

bool is_vowel(char ch) {
	switch (ch) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		return true;
	default:
		return false;
	}
}

int main() {
	string str;
	int len;
	int count = 0;

	while (true) {
		getline(cin, str);
		if (str == "#") break;
		len = str.length();
		for (int i = 0; i < str.length(); i++) {
			if (is_vowel((char)str[i]))
				count++;
		}
		cout << count << endl;
		count = 0;
	}
}