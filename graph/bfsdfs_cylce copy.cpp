class UndirectedGraph {
public:
    int n;
    vector<vector<int>> adj;

    UndirectedGraph(int n) {
        this->n = n;
        adj.resize(n);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool hasCycleBFS() {
        vector<int> vis(n, 0);

        // TODO: BFS with parent tracking for each component

        return false; // true if cycle found
    }
};


class BipartiteGraphDFS {
public:
    int n;
    vector<vector<int>> adj;

    BipartiteGraphDFS(int n) {
        this->n = n;
        adj.resize(n);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool isBipartite() {
        vector<int> color(n, -1);

        // TODO: DFS color check for all components

        return true;
    }
};

