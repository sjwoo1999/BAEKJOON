#include <iostream>
#include <string>
using namespace std;

class Stack {
	int value[10000];
	int input_index;
	// val[input_index]�� ���� push�ȴ�.
	int top_value;
	// ���� ���� �ִ� ���� �����Ѵ�.
	// ����� ���� ���� ��� -1�� �����Ѵ�.
public:
	Stack();
	void push(int x);
	// ���� X�� ���ÿ� �ִ� �����̴�.
	int pop();
	// ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	int size();
	// ���ÿ� ����ִ� ������ ������ ����Ѵ�.
	bool empty();
	// ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	int top();
	// ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
};

Stack::Stack() {
	for (int i = 0; i < 10000; i++) value[i] = 0;
	// ��� ������ ���� 0���� �ʱ�ȭ
	input_index = 0;								
	// ó�� �ԷµǴ� �ε����� ���� 0
	top_value = -1;
	// ó������ �� ���� ���Ұ� �������� �ʱ� ������ -1�̶�� ����
}

void Stack::push(int x) {
	// ���� X�� ���ÿ� �ִ� �����̴�.
	value[input_index] = x;
	// input_index �ε����� ���� �ִ´�.
	top_value = value[input_index];
	// ���� ���� �ִ� ���� ��� �ִ� ���̴�.
	input_index++;
	// ���� �Է��� �ε����� ���� �ϳ� ������Ų��.
}

int Stack::pop() {
	// ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	int pop_index = input_index - 1;
	// �־�� �ϴ� �ε������� �ϳ� ���� �ε����� ����ִ� ���� pop�Ѵ�.
	int temp = value[pop_index];
	// pop_index�� ����ִ� ���� ��ȯ�ؾ� �Ѵ�.

	if (pop_index == -1) {
		// pop index�� -1�� ��� = input index�� 0�� ��� = ���ÿ� ��� ���� ������� ���� ���
		input_index = 0;	
		top_value = -1;
		return -1;
	}

	value[pop_index] = 0;
	// pop_index�� ����ִ� ���� pop �����Ƿ� �� ���� 0�� �ȴ�.
	input_index = pop_index;
	// ���ο� ���� �Է¹��� �� �� ��ġ�� �Է� �޾ƾ� �ϹǷ� input_index�� ���� pop_index�� ������ ����
	top_value = value[input_index - 1];

	// �־�� �ϴ� �ε������� �ϳ� ���� �ε����� ����ִ� ���� ���� ���� �����ϴ� ���̴�.

	return temp;
}

int Stack::size() {
	// ���ÿ� ����ִ� ������ ������ ����Ѵ�.
	return input_index;
}

bool Stack::empty() {
	// ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	if (input_index == 0) return true;
	else return false;
}

int Stack::top() {
	// ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
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