#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, l, r;
    if (!(cin >> n >> h >> l >> r)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(h, -1));
    
    dp[0][0] = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < h; ++j) {
            if (dp[i][j] != -1) {
                int t1 = (j + a[i]) % h;
                int is_good1 = (t1 >= l && t1 <= r) ? 1 : 0;
                dp[i + 1][t1] = max(dp[i + 1][t1], dp[i][j] + is_good1);

                int t2 = (j + a[i] - 1) % h;
                int is_good2 = (t2 >= l && t2 <= r) ? 1 : 0;
                dp[i + 1][t2] = max(dp[i + 1][t2], dp[i][j] + is_good2);
            }
        }
    }
    int max_good_sleeps = 0;
    for (int j = 0; j < h; ++j) {
        max_good_sleeps = max(max_good_sleeps, dp[n][j]);
    }

    cout << max_good_sleeps << "\n";

    return 0;
}