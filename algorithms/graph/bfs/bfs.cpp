#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector <bool> visit;
vector<vector<int> > g;

void edge(int u, int v) {
    g[u].push_back(v);
    //for undiredted graph add this line
    g[v].push_back(u);
}

void bfs(int s) {
    queue<int> q;
    int u, v;

    q.push(s);
    visit[s] = true;

    while(!q.empty()) {
        u = q.front();
        q.pop();

        cout << u << " ";

        for (int i = 0; i < g[u].size(); i++) {
            v = g[u][i];
            if (!visit[v]) {
                q.push(v);
                visit[v] = true;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    visit.assign(n, false);
    g.assign(n, vector<int>());

    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        edge(u, v);
    }

    for (int i = 0; i < n; i++) 
        if (!visit[i])
            bfs(i);
}