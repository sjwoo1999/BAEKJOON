#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

// 단어를 반대 순으로 출력한다.

void change_string(string *str, int blank) {
	
	int word_count = blank + 1;
	// 단어의 개수는 빈칸의 개수보다 하나 많다.
	string* words = new string[word_count];

	string tempstr = *str;

	stringstream ss(tempstr);
	ss.str(tempstr);

	string word;
	int i = 0;
	while (ss >> word) {
		words[i] = word;
		i++;
	}

	string temp = "";

	for (int i = word_count - 1; i >= 0; i--) {
		temp += words[i] + " ";
	}

	*str = temp;
}

int main() {
	int n;
	cin >> n;
	string* str = new string[n];
	int* str_blank_count = new int[n];

	cin.ignore();
	// 반복문에서 getline 함수를 사용하려면 먼저 버퍼를 비워줘야 한다.

	for (int i = 0; i < n; i++) {
		getline(cin, str[i]);
		str_blank_count[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < str[i].length(); j++)
			if (str[i][j] == ' ')
				str_blank_count[i]++;
	}

	// 공백의 수가 홀수 개라면 단어는 짝수 개
	// 공백의 수가 짝수 개라면 단어는 홀수 개
	// 공백의 수가 0개라면 단어는 1개

	for (int i = 0; i < n; i++) {
		change_string(&str[i], str_blank_count[i]);
	}

	// cout << "After Changed" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Case #" << i + 1 << ": " << str[i] << endl;
	//	cout << "Case #" << i + 1 << ": " << str_blank_count[i] << endl;
	}


}