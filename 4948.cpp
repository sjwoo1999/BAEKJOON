#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int arr[1000001]; //���� ���� ����� �ڵ����� 0���� �ʱ�ȭ.

int findPrimeNum(int m, int n)
{
	int count = 0;
	//0�� 1�� �Ҽ��� �ƴϱ⿡ 1�� üũ���ش�.
	arr[0] = 1;
	arr[1] = 1;

	//n�����̱� ������ n+1��.
	for (int i = 2; i < n + 1; i++) {
		/* ����� ������ 4�����̴�. ��, ���� 3���ϱ����� �Ҽ��� �ش��ϴ� �κ��̱� ������ 2*i���� �����ص� ����� ����.
		j+=i�� i��ŭ �������µ�, ó������ 2��, �������� 3�� ��������. ��, ����� ������ �ϰ� �ִ�.
		ex) i�� 2�̸� 2�ǹ��, 3�̸� 3�� ����� ���� */
		for (int j = 2 * i; j < n + 1; j += i) {
			if (arr[j] == 0) {
				arr[j] = 1; //����� �迭���� 1�� üũ�ȴ�.
			}
		}
	}

	for (int i = m; i < n + 1; i++) {
		if (arr[i] == 0) // printf("%d\n", i);
			count++;
	}
	return count;
}

int main()
{
	int n;
	
	while (true) {
		cin >> n;

		if (n == 0) break;

		cout << findPrimeNum(n+1, 2 * n) << endl;

	}
	return 0;
}