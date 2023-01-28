#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Edge {
public:
	int node[2];
	int distance;
	Edge();
	Edge(int a, int b, int distance) {
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance;
	}

	// ������ ������������ ������ �� ������ distance�� �����ݴϴ�.
	bool operator<(Edge& edge) {
		return this->distance < edge.distance;
	}
};

int check[100000]; // ��� �����, �����尡 �ٲ���� üũ
vector<Edge> edges;

int getParent(int node) {
	if (check[node] == node) return node;
	return getParent(check[node]);
}

// �� ��带 �������� �������� �����մϴ�.
void unionParent(int node1, int node2) {
	node1 = getParent(node1);
	node2 = getParent(node2);
	if (node1 < node2) check[node2] = node1;
	else check[node1] = node2;
}

// ����Ŭ�� �����ϸ� true, �ƴϸ� false�� ��ȯ
bool isCycle(int node1, int node2) {
	node1 = getParent(node1);
	node2 = getParent(node2);
	if (node1 == node2) return true;
	else return false;
}

int main() {
	int v, e;
	int a, b, c;

	cin >> v >> e;

	for (int i = 0; i < e; i++) {
		cin >> a >> b >> c;
		edges.push_back(Edge(a, b, c));
	}

	// ������ �������� ����
	sort(edges.begin(), edges.end());

	// �� ���� �ڱ��ڽ��� �θ�� �ʱ�ȭ���ݴϴ�.
	for (int i = 1; i <= e; i++) {
		check[i] = i;
	}

	int sum = 0;
	for (int i = 0; i < edges.size(); i++) {
		// ����Ŭ�� �������� �ʴ´ٸ� ����� ���մϴ�.
		if (!isCycle(edges[i].node[0], edges[i].node[1])) {
			sum += edges[i].distance;
			unionParent(edges[i].node[0], edges[i].node[1]);
		}
	}

	cout << sum;
}