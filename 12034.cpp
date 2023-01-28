#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int casenumber = 1;
	while (t--) {
		int product_count;
		cin >> product_count;
		int* price = new int[product_count * 2];
		for (int i = 0; i < product_count * 2; i++) {
			cin >> price[i];
		}
		int k = 0;

		cout << "Case #" << casenumber << ": ";
		casenumber++;

		int* discounted = new int[product_count];
		int discounted_count = 0;

		for (int i = 0; i < product_count * 2; i++) {
			for (int j = i + 1; j < product_count * 2; j++) {
				// 여러 품목이 같은 가격을 갖는 경우 중복 카운팅 방지
				if (price[i] == 0)
					break;

				if (price[i] == price[j] * 0.75) {
					discounted[discounted_count] = price[i];
					discounted_count++;
					price[i] = 0; // 여러 품목이 같은 가격을 갖는 경우 중복 카운팅 방지
					price[j] = 0; // 여러 품목이 같은 가격을 갖는 경우 중복 카운팅 방지
					break;
				}
			}
		}

		for (int i = 0; i < discounted_count; i++) {
			cout << discounted[i] << " ";
		}

		cout << endl;
	}
}