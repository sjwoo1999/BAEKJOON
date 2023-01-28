#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x1, y1, r1;
	cin >> x1 >> y1 >> r1;
	int x2, y2, r2;
	cin >> x2 >> y2 >> r2;
	double distance;
	distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	if (distance < r1 + r2) cout << "YES";
	else cout << "NO";

}