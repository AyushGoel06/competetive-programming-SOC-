#include <bits/stdc++.h>
using namespace std;

// prev: 0 = rested yesterday, 1 = contest yesterday, 2 = gym yesterday
int f(const vector<int>& a, vector<vector<int>>& dp, int i, int prev) {
    // Base case: If we have processed all days, 0 active days left
    if (i == a.size()) {
        return 0;
    }

    // Return the cached result if we have computed this state before
    if (dp[i][prev] != -1) {
        return dp[i][prev];
    }

    // Option 1: Rest on this day (always an option)
    int max_active = f(a, dp, i + 1, 0);

    // Option 2: Write a contest
    // Can do this if a contest is held today (1 or 3) AND we didn't write one yesterday
    if ((a[i] == 1 || a[i] == 3) && prev != 1) {
        max_active = max(max_active, 1 + f(a, dp, i + 1, 1));
    }

    // Option 3: Go to the gym
    // Can do this if the gym is open today (2 or 3) AND we didn't go yesterday
    if ((a[i] == 2 || a[i] == 3) && prev != 2) {
        max_active = max(max_active, 1 + f(a, dp, i + 1, 2));
    }

    // Save and return the result
    return dp[i][prev] = max_active;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // DP table: dp[day_index][previous_activity]
    // 3 possible activities for 'prev' (0, 1, 2), initialized to -1
    vector<vector<int>> dp(n, vector<int>(3, -1));

    // Calculate the maximum number of days Vasya can be active
    // We start at day 0, and assume the "previous" day (day -1) was a rest day (0)
    int max_active_days = f(arr, dp, 0, 0);

    // Minimum rest days = Total days - Maximum active days
    cout << n - max_active_days << "\n";

    return 0;
}