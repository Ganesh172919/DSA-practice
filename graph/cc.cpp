#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    int n;
    vector<vector<int>> adj;
    vector<int> visited;

    Graph(int n) {
        this->n = n;
        adj.resize(n);
        visited.assign(n, 0);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void dfsUtil(int node) {
        // TODO: dfs logic
    }

    int countComponents() {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                cnt++;
                dfsUtil(i);
            }
        }
        return cnt;
    }
};

int main() {
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(2,3);
    g.addEdge(3,4);

    // int components = g.countComponents();
}
