class BipartiteGraphBFS {
public:
    int n;
    vector<vector<int>> adj;

    BipartiteGraphBFS(int n) {
        this->n = n;
        adj.resize(n);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool isBipartite() {
        vector<int> color(n, -1);

        // TODO: BFS color check for all components

        return true;
    }
};
