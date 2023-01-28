#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> vec[1001];
queue<int> Q;
int chDFS[1001], chBFS[1001], N;
void DFS(int v) {
    cout << v << " ";
    for (int i = 0; i < vec[v].size(); i++) {
        if (!chDFS[vec[v][i]]) {
            chDFS[vec[v][i]] = 1;
            DFS(vec[v][i]);
        }
    }
}
void BFS() {
    while (!Q.empty()) {
        int v = Q.front();
        Q.pop();
        cout << v << " ";
        for (int i = 0; i < vec[v].size(); i++) {
            if (!chBFS[vec[v][i]]) {
                chBFS[vec[v][i]] = 1;
                Q.push(vec[v][i]);
            }
        }
    }
}
int main() {
    int M, V, a, b;
    cin >> N >> M >> V;
    while (M--) {
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    chDFS[V] = chBFS[V] = 1;
    Q.push(V);
    for (int i = 1; i <= N; i++)
        sort(vec[i].begin(), vec[i].end());
    DFS(V);
    cout << "\n";
    BFS();
}
