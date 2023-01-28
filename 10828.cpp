#include <iostream>
#include <string>
using namespace std;

class Stack {
	int value[10000];
	int input_index;
	// val[input_index]에 값이 push된다.
	int top_value;
	// 가장 위에 있는 값을 저장한다.
	// 저장된 값이 없는 경우 -1을 저장한다.
public:
	Stack();
	void push(int x);
	// 정수 X를 스택에 넣는 연산이다.
	int pop();
	// 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	int size();
	// 스택에 들어있는 정수의 개수를 출력한다.
	bool empty();
	// 스택이 비어있으면 1, 아니면 0을 출력한다.
	int top();
	// 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
};

Stack::Stack() {
	for (int i = 0; i < 10000; i++) value[i] = 0;
	// 모든 원소의 값을 0으로 초기화
	input_index = 0;								
	// 처음 입력되는 인덱스의 값은 0
	top_value = -1;
	// 처음에는 맨 위의 원소가 존재하지 않기 때문에 -1이라고 가정
}

void Stack::push(int x) {
	// 정수 X를 스택에 넣는 연산이다.
	value[input_index] = x;
	// input_index 인덱스에 값을 넣는다.
	top_value = value[input_index];
	// 가장 위에 있는 값은 방금 넣는 값이다.
	input_index++;
	// 값을 입력할 인덱스의 값을 하나 증가시킨다.
}

int Stack::pop() {
	// 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	int pop_index = input_index - 1;
	// 넣어야 하는 인덱스보다 하나 작은 인덱스에 들어있는 값을 pop한다.
	int temp = value[pop_index];
	// pop_index에 담겨있는 값을 반환해야 한다.

	if (pop_index == -1) {
		// pop index가 -1인 경우 = input index가 0인 경우 = 스택에 어떠한 값도 들어있지 않은 경우
		input_index = 0;	
		top_value = -1;
		return -1;
	}

	value[pop_index] = 0;
	// pop_index에 담겨있는 값을 pop 했으므로 이 값은 0이 된다.
	input_index = pop_index;
	// 새로운 값을 입력받을 때 이 위치에 입력 받아야 하므로 input_index의 값을 pop_index의 값으로 지정
	top_value = value[input_index - 1];

	// 넣어야 하는 인덱스보다 하나 작은 인덱스에 들어있는 값이 제일 위에 존재하는 값이다.

	return temp;
}

int Stack::size() {
	// 스택에 들어있는 정수의 개수를 출력한다.
	return input_index;
}

bool Stack::empty() {
	// 스택이 비어있으면 1, 아니면 0을 출력한다.
	if (input_index == 0) return true;
	else return false;
}

int Stack::top() {
	// 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	int top_index = input_index - 1;
	if (top_index == -1)
		// input_index == 0;
		return -1;
	return top_value;
}

int main() {
	int n;
	cin >> n;
	string command;

	Stack stack;

	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") {
			int push_value;
			cin >> push_value;
			stack.push(push_value);
		}
		else if (command == "pop") {
			cout << stack.pop() << endl;
		}
		else if (command == "size") {
			cout << stack.size() << endl;
		}
		else if (command == "empty") {
			cout << stack.empty() << endl;
		}
		else if (command == "top") {
			cout << stack.top() << endl;
		}
	}
}