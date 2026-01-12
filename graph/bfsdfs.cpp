#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    int n;
    vector<vector<int>> adj;

    Graph(int n) {
        this->n = n;
        adj.resize(n);
    }

    void addEdge(int u, int v, bool directed = false) {
        adj[u].push_back(v);
        if (!directed) adj[v].push_back(u);
    }

    void dfs(int start) {
        vector<int> vis(n, 0);
        // TODO: recursive or stack-based dfs
    }

    void bfs(int start) {
        vector<int> vis(n, 0);
        // TODO: queue-based bfs
    }
};

int main() {
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(4,5);

    // g.dfs(0);
    // g.bfs(0);
}
