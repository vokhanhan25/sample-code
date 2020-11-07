#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);        
}

void DFSUtill(int u, vector<int> adj[], vector<bool> &visited) {
    visited[u] = true;
    cout << u << " ";
    for (int v = 0; v < adj[u].size(); v++)
        if (!visited[adj[u][v]])
            DFSUtill(adj[u][v], adj, visited);
}

void DFS(vector<int> adj[], int V) {
    vector<bool> visited(V, false);
    for (int u = 0; u < V; u++)
        if (!visited[u])
            DFSUtill(u, adj, visited);
}

int main() {
    int V = 5;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    DFS(adj, V);
}