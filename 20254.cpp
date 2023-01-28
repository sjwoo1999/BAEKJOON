#include <iostream>
using namespace std;

int main() {
	int uR, tR, uO, tO;
	cin >> uR >> tR >> uO >> tO;
	int score = 0;
	score = 56 * uR + 24 * tR + 14 * uO + 6 * tO;
	cout << score;
}