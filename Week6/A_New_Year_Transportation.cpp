#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    if (!(cin >> n >> t)) return 0;

    vector<int> a(n);
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
    }

    int current = 1;
    while (current < t) {
        current += a[current];
    }

    if (current == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}