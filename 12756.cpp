#include <iostream>
using namespace std;

int main() {
	int a_attack, a_life;
	cin >> a_attack >> a_life;
	int b_attack, b_life;
	cin >> b_attack >> b_life;

	while (a_life > 0 || b_life > 0) {
		a_life -= b_attack;
		b_life -= a_attack;

		if (a_life <= 0 && b_life <= 0) {
			cout << "DRAW";
			break;
		}
		else if (a_life <= 0) {
			cout << "PLAYER B";
			break;
		}
		else if (b_life <= 0) {
			cout << "PLAYER A";
			break;
		}
	}
}