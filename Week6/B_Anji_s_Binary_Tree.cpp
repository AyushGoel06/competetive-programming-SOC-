#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int dfs(int u, const string& s, const vector<int>& l, const vector<int>& r) {
    if (l[u] == 0 && r[u] == 0) {
        return 0;
    }

    int ans = INF;

    if (l[u] != 0) {
        int cost = (s[u - 1] == 'L') ? 0 : 1;
        ans = min(ans, cost + dfs(l[u], s, l, r));
    }

    if (r[u] != 0) {
        int cost = (s[u - 1] == 'R') ? 0 : 1;
        ans = min(ans, cost + dfs(r[u], s, l, r));
    }

    return ans;
}

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    vector<int> l(n + 1), r(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> l[i] >> r[i];
    }
    
    cout << dfs(1, s, l, r) << "\n";
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