#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		string* str = new string[n];
		int* amount = new int[n];
	
		for (int i = 0; i < n; i++) {
			cin >> str[i] >> amount[i];
		}

		int max_index = 0;
		int max_amount = amount[0];

		for (int i = 0; i < n; i++) {
			if (max_amount < amount[i]) {
				max_amount = amount[i];
				max_index = i;
			}
		}
		
		cout <<  str[max_index] << endl;
	}
}