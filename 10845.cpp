#include <iostream>
#include <string>
using namespace std;

class Queue {
	int value[100000];
	int head_index;	// 가장 처음으로 입력된 값을 저장할 인덱스
	int tail_index; // 가장 마지막으로 입력된 값을 저장할 인덱스
	int howManyValues; // 큐에 저장되어 있는 정수의 개수
	// 스택을 구현할 때에는 인덱스를 통해서 값을 관리했기 때문에
	// 비어있는지 아닌지를 판단할 떄 인덱스를 꼼꼼하게 확인해줘야 했는데,
	// 큐의 경우에는 큐에 저장된 정수의 개수를 통해서 더욱 간편하게
	// 큐가 비어있는지 아닌지를 파악할 수 있다.
public:
	Queue();
	void push(int x);
	// 정수 X를 큐에 넣는 연산이다.
	int pop(); // 값 변동 있음
	// 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다.
	// 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	int size();
	// 큐에 들어있는 정수의 개수를 출력한다.
	bool empty();
	// 큐가 비어있으면 1, 아니면 0을 출력한다.
	int front(); // 출력만 : 값 변동 없음
	// 큐의 가장 앞에 있는 정수를 출력한다.
	// 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
	int back(); // 출력만 : 값 변동 없음
	// 큐의 가장 뒤에 있는 정수를 출력한다.
	// 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
};

Queue::Queue() {
	for (int i = 0; i < 10000; i++) value[i] = 0;
	// 초기화
	head_index = tail_index = 0;
	// 큐가 비어있다면 0으로 지정
	howManyValues = 0;
	// 큐에는 0개의 원소가 저장되어 있다.
}

void Queue::push(int x) {
	// 정수 X를 큐에 넣는 연산이다.
	if (howManyValues == 0) { // 빈 큐인 경우
		head_index = 0; tail_index = 0;
		// 원소가 한 개만 존재하는 경우이므로
		// head_index와 tail_index를 동일하게 지정해준다.
	}
	else { // 큐에 값이 존재하는 경우
		tail_index++;
		// head_index에는 변화를 주면 안 되고
		// 맨 처음에 head_index와 tail_index를 동일하게 지정했으므로
		// head_index 다음 원소를 tail_index로 지정해주어야 한다.
	}
	value[tail_index] = x;
	howManyValues++;
	// 정수가 입력되었으므로 정수의 개수를 증가시켜준다.
	// 항상 작동해야 하는 구문이기 때문에 조건문에서 제외시켰다.
}

int Queue::pop() {
	// 값 변동 있음
	// 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다.
	// 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다

	// 큐에 들어있는 정수가 없는 경우에는
	// 큐에서 가장 앞에 있는 정수를 빼는 코드를 실행할 때
	// 오류가 발생할 수 있기 때문에 이 경우를 먼저 처리해주어야 한다.
	if (howManyValues == 0) return -1;
	// 큐에 값이 존재하는 경우
	else if (howManyValues > 0) {
		if (howManyValues == 1) {
			// 큐에 정수가 한 개만 존재하는 경우
			int temp = value[head_index];
			// 맨 앞에 있는 값을 출력한다.
			// 이 때 인덱스를 tail_index로 사용해도 무관하다.
			
			// 이제 큐에는 값이 존재하지 않기 때문에
			// 큐를 초기화 할 때 구현했던 것을 활용하여 작성해주면 된다.
			value[head_index] = 0;
			head_index = tail_index = 0;
			howManyValues = 0;
			// 큐에는 정수 값이 존재하지 않는다.

			return temp;
		}
		else if (howManyValues >= 2) {
			// 큐에 정수가 두 개 이상 존재하는 경우
			int temp = value[head_index];

			// 두 번째부터 tail_index까지 원소를 1부터 tail_index -1 원소로 옮긴다.
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
	// 큐에 들어있는 정수의 개수를 출력한다.
	return howManyValues;
}

bool Queue::empty() {
	// 큐가 비어있으면 1, 아니면 0을 출력한다.
	if (howManyValues == 0) return true;
	else return false;
}

int Queue::front() {
	// 출력만 : 값 변동 없음
	// 큐의 가장 앞에 있는 정수를 출력한다.
	// 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

	// 큐가 비어있는 경우 -1을 반환
	if (howManyValues == 0) return -1;

	// 큐의 가장 앞에 있는 정수를 출력한다.
	return value[head_index];
}

int Queue::back() {
	// 출력만 : 값 변동 없음
	// 큐의 가장 뒤에 있는 정수를 출력한다.
	// 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

	// 큐가 비어있는 경우 -1을 반환
	if (howManyValues == 0) return -1;

	// 큐의 가장 뒤에 있는 정수를 출력한다.
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