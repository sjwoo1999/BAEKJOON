#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string, string> mapset;
int main() {
	int n, m;
	cin >> n >> m;
	string* homepage = new string[n];
	string* password = new string[n];
	string find_password;

	for (int i = 0; i < n; i++) {
		cin >> homepage[i] >> password[i];
		mapset[homepage[i]] = password[i];
	}
													
	for (int i = 0; i < m; i++) {
		cin >> find_password;
		cout << mapset[find_password] << endl;
	}
}