#include <iostream>
using namespace std;

int main() {
	int k, d, a;
	scanf_s("%d/%d/%d", &k, &d, &a);

	if (k + a < d || d == 0)
		cout << "hasu";
	else
		cout << "gosu";
}