#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dfs(int u, const vector<vector<int>>& adj, const string& s, int& ans) {
    int balance = (s[u - 1] == 'W') ? 1 : -1;
    
    for (int v : adj[u]) {
        balance += dfs(v, adj, s, ans);
    }
    
    if (balance == 0) {
        ans++;
    }
    
    return balance;
}

void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> adj(n + 1);
    for (int i = 2; i <= n; ++i) {
        int p;
        cin >> p;
        adj[p].push_back(i);
    }
    
    string s;
    cin >> s;
    
    int ans = 0;
    dfs(1, adj, s, ans);
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