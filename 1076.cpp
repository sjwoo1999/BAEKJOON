#include <iostream>
#include <string>
using namespace std;

long long value(string str) {
	if (str == "black")
		return 0;
	else if (str == "brown")
		return 1;
	else if (str == "red")
		return 2;
	else if (str == "orange")
		return 3;
	else if (str == "yellow")
		return 4;
	else if (str == "green")
		return 5;
	else  if (str == "blue")
		return 6;
	else if (str == "violet")
		return 7;
	else if (str == "grey")
		return 8;
	else if (str == "white")
		return 9;
	else
		return -1;
}

int multiplication(string str) {
	if (str == "black")
		return 1;
	else if (str == "brown")
		return 10;
	else if (str == "red")
		return 100;
	else if (str == "orange")
		return 1000;
	else if (str == "yellow")
		return 10000;
	else if (str == "green")
		return 100000;
	else  if (str == "blue")
		return 1000000;
	else if (str == "violet")
		return 10000000;
	else if (str == "grey")
		return 100000000;
	else if (str == "white")
		return 1000000000;
	else
		return -1;
}

int main() {
	string str1, str2, str3;
	long long result = 0;
	cin >> str1 >> str2 >> str3;
	result = (value(str1) * 10 + value(str2)) * multiplication(str3);
	cout << result;
}