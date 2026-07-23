#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int totalVertices;
    cin >> totalVertices;

    vector<int> degree(totalVertices + 1, 0);

    for (int i = 0; i < totalVertices - 1; i++) {
        int firstVertex, secondVertex;
        cin >> firstVertex >> secondVertex;
        degree[firstVertex]++;
        degree[secondVertex]++;
    }

    int leafCount = 0;
    for (int i = 1; i <= totalVertices; i++) {
        if (degree[i] == 1) {
            leafCount++;
        }
    }

    int minimumOperations = (leafCount + 1) / 2;
    cout << minimumOperations << "\n";
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