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

    void addEdge(int u, int v) {
        // Directed edge u -> v
        adj[u].push_back(v);
    }

    vector<int> topoSortKahn() {
        vector<int> indegree(n, 0);

        // TODO: compute indegree[]

        queue<int> q;
        vector<int> order;

        // TODO: push 0-indegree nodes into q

        // TODO: BFS to build order[]

        return order; // empty if cycle exists
    }

    vector<int> topoSortDFS() {
        vector<int> vis(n, 0);
        vector<int> order;

        // TODO: dfs-based topo, push in postorder

        reverse(order.begin(), order.end());
        return order;
    }
};
