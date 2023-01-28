#include <iostream>
#include <algorithm>
using namespace std;

bool BinarySearch(int* arr, int len, int key) {
	int start = 0;
	int end = len - 1;
	int mid;

	while (end - start >= 0) {
		mid = (start + end) / 2; // �߾Ӱ�

		if (arr[mid] == key) // key ���� ã���� ��
			return true;
		else if (arr[mid] > key) // key ���� mid�� ������ ���� �� (��������)
			end = mid - 1;
		else // key ���� mid�� ������ Ŭ �� (����������)
			start = mid + 1;
	}
	

	return false;
}

int main() {
	int n;
	cin >> n;
	int* nArr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> nArr[i];

	int m;
	cin >> m;
	int* mArr = new int[m];
	for (int i = 0; i < m; i++)
		cin >> mArr[i];

	sort(nArr, nArr + n);

	bool doesExist;
	for (int i = 0; i < m; i++) {
		doesExist = BinarySearch(nArr, n, mArr[i]);
		if (doesExist == true)
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
}