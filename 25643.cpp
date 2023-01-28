#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	// 문자열의 개수 N과 문자열의 길이 M이 주어진다.
	string* str = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	// 모든 문자열을 순서대로 쌓아서 탑을 완성할 수 있다면 1 그렇지 않다면 0을 출력한다.
	// 모든 문자열을 순서대로? str[0], str[1], str[2], ... str[n-1] 까지 입력된 순서로 탑을 쌓을 수 있느냐?
	
	
}