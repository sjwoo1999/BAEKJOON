#include <iostream>
using namespace std;

int main() {
	int king, q, l, b, knight, p;
	cin >> king >> q >> l >> b >> knight >> p;

	cout << 1 - king << ' ' << 1 - q << ' ' << 2 - l << ' ' << 2 - b << ' ' << 2 - knight << ' ' << 8 - p;
}