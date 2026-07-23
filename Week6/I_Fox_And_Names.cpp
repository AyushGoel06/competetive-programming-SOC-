#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<string> names(n);
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }

    vector<vector<int>> adj(26);
    vector<int> in_degree(26, 0);

    for (int i = 0; i < n - 1; ++i) {
        string s1 = names[i];
        string s2 = names[i + 1];
        
        bool found = false;
        int len = min(s1.length(), s2.length());
        for (int j = 0; j < len; ++j) {
            if (s1[j] != s2[j]) {
                adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                in_degree[s2[j] - 'a']++;
                found = true;
                break;
            }
        }
        
        if (!found && s1.length() > s2.length()) {
            cout << "Impossible\n";
            return 0;
        }
    }

    queue<int> q;
    for (int i = 0; i < 26; ++i) {
        if (in_degree[i] == 0) {
            q.push(i);
        }
    }

    string result = "";
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        result += (char)(u + 'a');
        
        for (int v : adj[u]) {
            in_degree[v]--;
            if (in_degree[v] == 0) {
                q.push(v);
            }
        }
    }

    if (result.length() < 26) {
        cout << "Impossible\n";
    } else {
        cout << result << "\n";
    }

    return 0;
}