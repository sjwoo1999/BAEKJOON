#include <iostream>
using namespace std;

int main() {
	int s1, s2;
	cin >> s1 >> s2;
	int* sample_test_case = new int[s1];
	int* system_test_case = new int[s2];

	int *manyoung = new int[s1];

	int code = 0; // 0 : Accepted 1: Wrong Answer 2: Why Wrong!!!

	for (int i = 0; i < s1; i++) {
		cin >> sample_test_case[i] >> manyoung[i];
		if (sample_test_case[i] != manyoung[i]) {
			code = 1;
		}
	}

	delete[] manyoung;

	manyoung = new int[s2];

	for (int i = 0; i < s2; i++) {
		cin >> system_test_case[i] >> manyoung[i];
		if (system_test_case[i] != manyoung[i]) {
			if (code == 1) code = 1;
			else { // code != 1
				code = 2;
			}
		}
	}

	delete[] manyoung;

	switch (code) {
	case 0:
		cout << "Accepted";
		break;
	case 1:
		cout << "Wrong Answer";
		break;
	case 2:
		cout << "Why Wrong!!!";
	}
}