#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int u, int p, const vector<vector<pair<int, int>>>& adj, vector<int>& dp, vector<int>& id) {
    for (auto edge : adj[u]) {
        int v = edge.first;
        int idx = edge.second;
        
        if (v != p) {
            if (idx < id[u]) {
                dp[v] = dp[u] + 1;
            } else {
                dp[v] = dp[u];
            }
            id[v] = idx;
            dfs(v, u, adj, dp, id);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    
    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }
    
    vector<int> dp(n + 1, 0);
    vector<int> id(n + 1, 0);
    
    dp[1] = 1;
    id[1] = 0;
    
    dfs(1, 0, adj, dp, id);
    
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans = max(ans, dp[i]);
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}