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
				// ���� ǰ���� ���� ������ ���� ��� �ߺ� ī���� ����
				if (price[i] == 0)
					break;

				if (price[i] == price[j] * 0.75) {
					discounted[discounted_count] = price[i];
					discounted_count++;
					price[i] = 0; // ���� ǰ���� ���� ������ ���� ��� �ߺ� ī���� ����
					price[j] = 0; // ���� ǰ���� ���� ������ ���� ��� �ߺ� ī���� ����
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