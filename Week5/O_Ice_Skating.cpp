#include <iostream>
#include <vector>

using namespace std;

void depthFirstSearch(int currentDrift, const vector<pair<int, int>>& drifts, vector<bool>& visited) {
    visited[currentDrift] = true;
    for (int i = 0; i < drifts.size(); i++) {
        if (!visited[i]) {
            if (drifts[currentDrift].first == drifts[i].first || drifts[currentDrift].second == drifts[i].second) {
                depthFirstSearch(i, drifts, visited);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int totalDrifts;
    if (!(cin >> totalDrifts)) return 0;

    vector<pair<int, int>> drifts(totalDrifts);
    for (int i = 0; i < totalDrifts; i++) {
        cin >> drifts[i].first >> drifts[i].second;
    }

    vector<bool> visited(totalDrifts, false);
    int connectedComponents = 0;

    for (int i = 0; i < totalDrifts; i++) {
        if (!visited[i]) {
            depthFirstSearch(i, drifts, visited);
            connectedComponents++;
        }
    }

    cout << connectedComponents - 1 << "\n";

    return 0;
}