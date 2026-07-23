#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void solve() {
    int totalVertices;
    cin >> totalVertices;

    vector<int> childCount(totalVertices + 1, 0);
    for (int i = 2; i <= totalVertices; i++) {
        int parentNode;
        cin >> parentNode;
        childCount[parentNode]++;
    }

    vector<int> siblingGroups;
    siblingGroups.push_back(1);

    for (int i = 1; i <= totalVertices; i++) {
        if (childCount[i] > 0) {
            siblingGroups.push_back(childCount[i]);
        }
    }

    sort(siblingGroups.rbegin(), siblingGroups.rend());

    int totalGroups = siblingGroups.size();
    int baseSeconds = totalGroups;

    priority_queue<int> remainingUninfected;

    for (int i = 0; i < totalGroups; i++) {
        int remainingInGroup = siblingGroups[i] - (totalGroups - i);
        if (remainingInGroup > 0) {
            remainingUninfected.push(remainingInGroup);
        }
    }

    int extraInjections = 0;
    while (!remainingUninfected.empty()) {
        int largestRemainingGroup = remainingUninfected.top();
        remainingUninfected.pop();

        if (largestRemainingGroup <= extraInjections) {
            break;
        }

        largestRemainingGroup--;
        extraInjections++;

        if (largestRemainingGroup > extraInjections) {
            remainingUninfected.push(largestRemainingGroup);
        }
    }

    cout << baseSeconds + extraInjections << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }

    return 0;
}