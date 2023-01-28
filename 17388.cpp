#include <iostream>
using namespace std;

int main() {
	int s, k, h;
	cin >> s >> k >> h;

	int univ[3];
	univ[0] = s;
	univ[1] = k;
	univ[2] = h;

	int min = univ[0];
	int index = 0;
	for (int i = 0; i < 3; i++) {
		if (min > univ[i]) {
			min = univ[i];
			index = i;
		}
	}

	if (s + k + h >= 100)
		cout << "OK" << endl;
	else {
		switch (index) {
		case 0:
			cout << "Soongsil";
			break;
		case 1:
			cout << "Korea";
			break;
		case 2:
			cout << "Hanyang";
			break;
		}
	}
}