#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

// �ܾ �ݴ� ������ ����Ѵ�.

void change_string(string *str, int blank) {
	
	int word_count = blank + 1;
	// �ܾ��� ������ ��ĭ�� �������� �ϳ� ����.
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
	// �ݺ������� getline �Լ��� ����Ϸ��� ���� ���۸� ������ �Ѵ�.

	for (int i = 0; i < n; i++) {
		getline(cin, str[i]);
		str_blank_count[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < str[i].length(); j++)
			if (str[i][j] == ' ')
				str_blank_count[i]++;
	}

	// ������ ���� Ȧ�� ����� �ܾ�� ¦�� ��
	// ������ ���� ¦�� ����� �ܾ�� Ȧ�� ��
	// ������ ���� 0����� �ܾ�� 1��

	for (int i = 0; i < n; i++) {
		change_string(&str[i], str_blank_count[i]);
	}

	// cout << "After Changed" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Case #" << i + 1 << ": " << str[i] << endl;
	//	cout << "Case #" << i + 1 << ": " << str_blank_count[i] << endl;
	}


}