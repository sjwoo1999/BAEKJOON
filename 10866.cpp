#include <iostream>
#include <string>
using namespace std;

class Deque {
	int arr[10000];
	int count;
public:
	Deque();
	void push_front(int x);
	void push_back(int x);
	void pop_front();
	void pop_back();
	void size();
	void empty();
	void front();
	void back();
};

Deque::Deque() {
	for (int i = 0; i < 10000; i++) {
		arr[i] = -1;
	}
	count = 0;
}

void Deque::push_front(int x) {
	if (count == 0) {
		arr[count] = x;
	}
	else {
		for (int i = count; i >= 1; i--) {
			arr[i] = arr[i - 1];
		}
		arr[0] = x;
	}
	count++;
}

void Deque::push_back(int x) {
	arr[count] = x;
	count++;
}

void Deque::pop_front() {
	if (count == 0) {
		cout << -1 << endl;
		return;
	}

	int front = arr[0];

	count--;

	for (int i = 0; i < count; i++)
		arr[i] = arr[i + 1];

	arr[count] = -1;

	cout << front << endl;
}

void Deque::pop_back() {
	if (count == 0) {
		cout << -1 << endl;
		return;
	}

	int back = arr[count - 1];
	arr[count - 1] = -1;
	count--;
	
	cout << back << endl;
}

void Deque::size() {
	cout << count << endl;
}

void Deque::empty() {
	if (count == 0) cout << 1 << endl;
	else cout << 0 << endl;
}

void Deque::front() {
	if (count != 0)
		cout << arr[0] << endl;
	else
		cout << -1 << endl;
}

void Deque::back() {
	if (count != 0)
		cout << arr[count - 1] << endl;
	else
		cout << -1 << endl;
}

int main() {
	int n;
	cin >> n;
	string str;
	Deque deque;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push_front") {
			int num;
			cin >> num;
			deque.push_front(num);
		}
		else if (str == "push_back") {
			int num;
			cin >> num;
			deque.push_back(num);
		}
		else if (str == "pop_front")
			deque.pop_front();
		else if (str == "pop_back")
			deque.pop_back();
		else if (str == "size")
			deque.size();
		else if (str == "empty")
			deque.empty();
		else if (str == "front")
			deque.front();
		else if (str == "back")
			deque.back();
	}
}