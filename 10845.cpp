#include <iostream>
#include <string>
using namespace std;

class Queue {
	int value[100000];
	int head_index;	// ���� ó������ �Էµ� ���� ������ �ε���
	int tail_index; // ���� ���������� �Էµ� ���� ������ �ε���
	int howManyValues; // ť�� ����Ǿ� �ִ� ������ ����
	// ������ ������ ������ �ε����� ���ؼ� ���� �����߱� ������
	// ����ִ��� �ƴ����� �Ǵ��� �� �ε����� �Ĳ��ϰ� Ȯ������� �ߴµ�,
	// ť�� ��쿡�� ť�� ����� ������ ������ ���ؼ� ���� �����ϰ�
	// ť�� ����ִ��� �ƴ����� �ľ��� �� �ִ�.
public:
	Queue();
	void push(int x);
	// ���� X�� ť�� �ִ� �����̴�.
	int pop(); // �� ���� ����
	// ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�.
	// ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	int size();
	// ť�� ����ִ� ������ ������ ����Ѵ�.
	bool empty();
	// ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	int front(); // ��¸� : �� ���� ����
	// ť�� ���� �տ� �ִ� ������ ����Ѵ�.
	// ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
	int back(); // ��¸� : �� ���� ����
	// ť�� ���� �ڿ� �ִ� ������ ����Ѵ�.
	// ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
};

Queue::Queue() {
	for (int i = 0; i < 10000; i++) value[i] = 0;
	// �ʱ�ȭ
	head_index = tail_index = 0;
	// ť�� ����ִٸ� 0���� ����
	howManyValues = 0;
	// ť���� 0���� ���Ұ� ����Ǿ� �ִ�.
}

void Queue::push(int x) {
	// ���� X�� ť�� �ִ� �����̴�.
	if (howManyValues == 0) { // �� ť�� ���
		head_index = 0; tail_index = 0;
		// ���Ұ� �� ���� �����ϴ� ����̹Ƿ�
		// head_index�� tail_index�� �����ϰ� �������ش�.
	}
	else { // ť�� ���� �����ϴ� ���
		tail_index++;
		// head_index���� ��ȭ�� �ָ� �� �ǰ�
		// �� ó���� head_index�� tail_index�� �����ϰ� ���������Ƿ�
		// head_index ���� ���Ҹ� tail_index�� �������־�� �Ѵ�.
	}
	value[tail_index] = x;
	howManyValues++;
	// ������ �ԷµǾ����Ƿ� ������ ������ ���������ش�.
	// �׻� �۵��ؾ� �ϴ� �����̱� ������ ���ǹ����� ���ܽ��״�.
}

int Queue::pop() {
	// �� ���� ����
	// ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�.
	// ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�

	// ť�� ����ִ� ������ ���� ��쿡��
	// ť���� ���� �տ� �ִ� ������ ���� �ڵ带 ������ ��
	// ������ �߻��� �� �ֱ� ������ �� ��츦 ���� ó�����־�� �Ѵ�.
	if (howManyValues == 0) return -1;
	// ť�� ���� �����ϴ� ���
	else if (howManyValues > 0) {
		if (howManyValues == 1) {
			// ť�� ������ �� ���� �����ϴ� ���
			int temp = value[head_index];
			// �� �տ� �ִ� ���� ����Ѵ�.
			// �� �� �ε����� tail_index�� ����ص� �����ϴ�.
			
			// ���� ť���� ���� �������� �ʱ� ������
			// ť�� �ʱ�ȭ �� �� �����ߴ� ���� Ȱ���Ͽ� �ۼ����ָ� �ȴ�.
			value[head_index] = 0;
			head_index = tail_index = 0;
			howManyValues = 0;
			// ť���� ���� ���� �������� �ʴ´�.

			return temp;
		}
		else if (howManyValues >= 2) {
			// ť�� ������ �� �� �̻� �����ϴ� ���
			int temp = value[head_index];

			// �� ��°���� tail_index���� ���Ҹ� 1���� tail_index -1 ���ҷ� �ű��.
			for (int i = 1; i <= tail_index; i++) {
				value[i - 1] = value[i];
			}
			
			value[tail_index] = 0;
			howManyValues--;
			tail_index--;

			return temp;
		}
	}

}

int Queue::size() {
	// ť�� ����ִ� ������ ������ ����Ѵ�.
	return howManyValues;
}

bool Queue::empty() {
	// ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	if (howManyValues == 0) return true;
	else return false;
}

int Queue::front() {
	// ��¸� : �� ���� ����
	// ť�� ���� �տ� �ִ� ������ ����Ѵ�.
	// ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

	// ť�� ����ִ� ��� -1�� ��ȯ
	if (howManyValues == 0) return -1;

	// ť�� ���� �տ� �ִ� ������ ����Ѵ�.
	return value[head_index];
}

int Queue::back() {
	// ��¸� : �� ���� ����
	// ť�� ���� �ڿ� �ִ� ������ ����Ѵ�.
	// ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

	// ť�� ����ִ� ��� -1�� ��ȯ
	if (howManyValues == 0) return -1;

	// ť�� ���� �ڿ� �ִ� ������ ����Ѵ�.
	return value[tail_index];
}

int main() {
	int n;
	cin >> n;

	string *command = new string [n];

	Queue queue;

	for (int i = 0; i < n; i++) {
		cin >> command[i];
		if (command[i] == "push") {
			int push_value;
			cin >> push_value;
			queue.push(push_value);
		}
		else if (command[i] == "pop") {
			cout << queue.pop() << endl;
		}
		else if (command[i] == "size") {
			cout << queue.size() << endl;
		}
		else if (command[i] == "empty") {
			cout << queue.empty() << endl;
		}
		else if (command[i] == "front") {
			cout << queue.front() << endl;
		}
		else if (command[i] == "back") {
			cout << queue.back() << endl;
		}
	}
}