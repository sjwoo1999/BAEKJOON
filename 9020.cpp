#include <iostream>
#include <cmath>
#include <vector>
using namespace std;



void eratosthenes(int n, bool* trueorfalse) {
	trueorfalse[0] = trueorfalse[1] = true;
	for (int i = 2; i <= sqrt(n); i++) {
		if (trueorfalse[i] == false) {
			for (int j = i + 1; j <= n; j += i) {
				trueorfalse[j] = true;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		bool* trueorfalse = new bool[n+1];
		for (int i = 0; i < n+1; i++) {
			trueorfalse[i] = false;
		}

		// 자신보다 작은 소수에 대해서 true 값으로 바꾸어준다.
		eratosthenes(n, trueorfalse);

		int count = 0;

		for (int i = 0; i < n; i++) {
			if (trueorfalse[i] == true) {
				for (int j = i + 1; j < n; j++) {
					if (trueorfalse[j] == true) {
						cout << "i : " << i << " j : " << j << endl;
						if (i + j == n) {
							cout << "i : " << i << " j : " << j << endl;
							cout << "count++" << endl;
							count++;
							break;
						}
					}
				}
			}
		}

		// 골드바흐 파티션이 한 개인 경우 바로 출력하면 된다.

		if (count == 1) {
			cout << "count == 1 " << endl;
			for (int i = 0; i < n; i++) {
				if (trueorfalse[i] == true) {
					for (int j = i + 1; j < n - 1; j++) {
						if (trueorfalse[j] == true) {
							if (i + j == n) {
								cout << i << " " << j << endl;
								break;
							}
						}
					}
				}
			}
		}
		// 골드바흐 파티션이 한 개가 아닌 경우 count의 개수만큼 i와 j를 저장할 배열을 만들어야 한다.
		else {
			cout << "count != 1" << endl;
			int* difference_value_array = new int[count];
			int* i_array = new int[count];
			int* j_array = new int[count];

			for (int i = 0; i < count; i++) {
				difference_value_array[i] = 0;
				i_array[i] = 0;
				j_array[i] = 0;
			}

			int index = 0;

			for (int i = 0; i < n; i++) {
				if (trueorfalse[i] == true) {
					for (int j = i + 1; j < n - 1; j++) {
						if (trueorfalse[j] == true) {
							if (i + j == n) {
								difference_value_array[index] = abs(i - j);
								i_array[index] = i;
								j_array[index] = j;
								index++;

								cout << "i : " << i << endl;
								cout << "j : " << j << endl;
								cout << "index : " << index << endl;
							}
						}
					}
				}
			}
			int min_difference_value = difference_value_array[0];
			int min_difference_index = 0;

			for (int i = 0; i < count; i++) {
				cout << "difference_value_array[" << i << "] : " << difference_value_array[i] << endl;
			}

			for (int i = 1; i < count; i++) {
				if (min_difference_value > difference_value_array[i]) {
					min_difference_value = difference_value_array[i];
					min_difference_index = i;
				}
			}

			cout << i_array[min_difference_index] << " " << j_array[min_difference_index] << endl;
		}
	}
}