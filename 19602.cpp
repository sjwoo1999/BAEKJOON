#include <iostream>
using namespace std;

int main(){
	int s, m, l;
	cin >> s >> m >> l;
	int h_s = 1 * s + 2 * m + 3 * l;
	
	if (h_s >= 10) cout << "happy";
	else cout << "sad";
}