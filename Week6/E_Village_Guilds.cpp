#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> p(n + 1);
    for (int i = 2; i <= n; ++i) {
        cin >> p[i];
    }
    
    vector<int> max_h(n + 1, -1);
    vector<int> max2_h(n + 1, -1);
    
    for (int i = n; i >= 2; --i) {
        int h = max_h[i] + 1;
        if (h > max_h[p[i]]) {
            max2_h[p[i]] = max_h[p[i]];
            max_h[p[i]] = h;
        } else if (h > max2_h[p[i]]) {
            max2_h[p[i]] = h;
        }
    }
    
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        ans += max2_h[i] + 2;
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