#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int totalNodes, totalRestrictions;
    cin >> totalNodes >> totalRestrictions;

    vector<bool> isRestrictedCenter(totalNodes + 1, false);

    for (int i = 0; i < totalRestrictions; i++) {
        int startNode, middleNode, endNode;
        cin >> startNode >> middleNode >> endNode;
        isRestrictedCenter[middleNode] = true;
    }

    int rootNode = -1;
    for (int i = 1; i <= totalNodes; i++) {
        if (!isRestrictedCenter[i]) {
            rootNode = i;
            break;
        }
    }

    for (int i = 1; i <= totalNodes; i++) {
        if (i != rootNode) {
            cout << rootNode << " " << i << "\n";
        }
    }
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