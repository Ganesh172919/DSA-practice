#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    int n;  // number of nodes
    vector<vector<int>> adj;  // adjacency list

    Graph(int n) {
        this->n = n;
        adj.resize(n);
    }

    // add edge (undirected or directed)
    void addEdge(int u, int v, bool directed = false) {
        adj[u].push_back(v);
        if (!directed)
            adj[v].push_back(u);
    }


    // BFS (user will implement logic)
    void bfs(int start) {
        vector<int> visited(n, 0);
        // TODO: implement BFS
        queue<int> q;

        q.push(start);
        visited[start] = 1;

        while(!q.empty()){

        int node = q.front();
        q.pop();
       
        cout << node << " ";

        for(int i : adj[node]){
            if(!visited[i]){
                visited[i] =1;
                q.push(i);
                
            }
        }
    }
        
    }
};

int main() {
    Graph g(5);  // create graph with 5 nodes: 0,1,2,3,4
    
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

   
    g.bfs(0);

    return 0;
}
