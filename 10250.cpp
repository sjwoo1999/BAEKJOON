#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int h, w, n;
		cin >> h >> w >> n;

		int room_number = 0;

		if (n % h == 0) {
			room_number = h;
			room_number *= 100;
			room_number += (n / h);
		}

		else {
			room_number = n % h;
			room_number *= 100;
			room_number += (1 + n / h);
		}


		cout << room_number << endl;
	}
}