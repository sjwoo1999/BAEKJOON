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

	// 간선을 오름차순으로 정렬할 때 기준을 distance로 정해줍니다.
	bool operator<(Edge& edge) {
		return this->distance < edge.distance;
	}
};

int check[100000]; // 노드 연결용, 연결노드가 바뀌는지 체크
vector<Edge> edges;

int getParent(int node) {
	if (check[node] == node) return node;
	return getParent(check[node]);
}

// 두 노드를 작은값을 기준으로 연결합니다.
void unionParent(int node1, int node2) {
	node1 = getParent(node1);
	node2 = getParent(node2);
	if (node1 < node2) check[node2] = node1;
	else check[node1] = node2;
}

// 싸이클이 존재하면 true, 아니면 false를 반환
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

	// 간선을 오름차순 정렬
	sort(edges.begin(), edges.end());

	// 각 노드는 자기자신을 부모로 초기화해줍니다.
	for (int i = 1; i <= e; i++) {
		check[i] = i;
	}

	int sum = 0;
	for (int i = 0; i < edges.size(); i++) {
		// 싸이클이 존재하지 않는다면 비용을 더합니다.
		if (!isCycle(edges[i].node[0], edges[i].node[1])) {
			sum += edges[i].distance;
			unionParent(edges[i].node[0], edges[i].node[1]);
		}
	}

	cout << sum;
}