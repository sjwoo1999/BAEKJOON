#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	
	int alpha[26];
	for (int i = 0; i < 26; i++)
		alpha[i] = 0;

	for (int i = 0; i < str.length(); i++) {
		switch ((char)str[i]) {
		case 'A':
		case 'a':
			alpha[0]++;
			break;
		case 'B':
		case 'b':
			alpha[1]++;
			break;
		case 'C':
		case 'c':
			alpha[2]++;
			break;
		case 'D':
		case 'd':
			alpha[3]++;
			break;
		case 'E':
		case 'e':
			alpha[4]++;
			break;
		case 'F':
		case 'f':
			alpha[5]++;
			break;
		case 'G':
		case 'g':
			alpha[6]++;
			break;
		case 'H':
		case 'h':
			alpha[7]++;
			break;
		case 'I':
		case 'i':
			alpha[8]++;
			break;
		case 'J':
		case 'j':
			alpha[9]++;
			break;
		case 'K':
		case 'k':
			alpha[10]++;
			break;
		case 'L':
		case 'l':
			alpha[11]++;
			break;
		case 'M':
		case 'm':
			alpha[12]++;
			break;
		case 'N':
		case 'n':
			alpha[13]++;
			break;
		case 'O':
		case 'o':
			alpha[14]++;
			break;
		case 'P':
		case 'p':
			alpha[15]++;
			break;
		case 'Q':
		case 'q':
			alpha[16]++;
			break;
		case 'R':
		case 'r':
			alpha[17]++;
			break;
		case 'S':
		case 's':
			alpha[18]++;
			break;
		case 'T':
		case 't':
			alpha[19]++;
			break;
		case 'U':
		case 'u':
			alpha[20]++;
			break;
		case 'V':
		case 'v':
			alpha[21]++;
			break;
		case 'W':
		case 'w':
			alpha[22]++;
			break;
		case 'X':
		case 'x':
			alpha[23]++;
			break;
		case 'Y':
		case 'y':
			alpha[24]++;
			break;
		case 'Z':
		case 'z':
			alpha[25]++;
			break;
		}
	}

	char most_used = 'A';
	int max = alpha[0];
	int max_index = 0;
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			max_index = i;
			most_used = (i + 65);
			if (most_used > 122)
				most_used -= 65;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (i != max_index && alpha[i] == alpha[max_index]) {
			cout << "?";
			return 0;
		}
	}

	cout << most_used;
}