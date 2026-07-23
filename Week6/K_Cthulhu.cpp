#include <iostream>
#include <vector>

using namespace std;

void dfs(int u, const vector<vector<int>>& adj, vector<bool>& visited, int& count) {
    visited[u] = true;
    count++;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, adj, visited, count);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (n != m) {
        cout << "NO\n";
        return 0;
    }

    vector<bool> visited(n + 1, false);
    int count = 0;
    
    dfs(1, adj, visited, count);

    if (count == n) {
        cout << "FHTAGN!\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}