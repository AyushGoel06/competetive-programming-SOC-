#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> p(n);
    vector<long long> cntA(n + 1, 0), cntB(n + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first >> p[i].second;
        cntA[p[i].first]++;
        cntB[p[i].second]++;
    }
    
    long long total = 1LL * n * (n - 1) * (n - 2) / 6;
    long long bad = 0;
    
    for (int i = 0; i < n; ++i) {
        bad += (cntA[p[i].first] - 1) * (cntB[p[i].second] - 1);
    }
    
    cout << total - bad << "\n";
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