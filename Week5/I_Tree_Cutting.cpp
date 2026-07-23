#include <iostream>
#include <vector>

using namespace std;

bool canAchieveComponentSize(int currentNode, int parentNode, int targetSize, int &cutsMade, const vector<vector<int>> &adjacencyList, vector<int> &subtreeSize) {
    subtreeSize[currentNode] = 1;
    for (int neighbor : adjacencyList[currentNode]) {
        if (neighbor != parentNode) {
            canAchieveComponentSize(neighbor, currentNode, targetSize, cutsMade, adjacencyList, subtreeSize);
            subtreeSize[currentNode] += subtreeSize[neighbor];
        }
    }
    if (subtreeSize[currentNode] >= targetSize) {
        cutsMade++;
        subtreeSize[currentNode] = 0;
    }
    return true;
}

bool checkFeasibility(int targetSize, int requiredCuts, int totalVertices, const vector<vector<int>> &adjacencyList) {
    int cutsMade = 0;
    vector<int> subtreeSize(totalVertices + 1, 0);
    canAchieveComponentSize(1, 0, targetSize, cutsMade, adjacencyList, subtreeSize);
    return cutsMade >= requiredCuts + 1;
}

void solve() {
    int totalVertices, edgesToRemove;
    cin >> totalVertices >> edgesToRemove;

    vector<vector<int>> adjacencyList(totalVertices + 1);
    for (int i = 0; i < totalVertices - 1; i++) {
        int firstVertex, secondVertex;
        cin >> firstVertex >> secondVertex;
        adjacencyList[firstVertex].push_back(secondVertex);
        adjacencyList[secondVertex].push_back(firstVertex);
    }

    int low = 1, high = totalVertices / (edgesToRemove + 1);
    int optimalComponentSize = 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (checkFeasibility(mid, edgesToRemove, totalVertices, adjacencyList)) {
            optimalComponentSize = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << optimalComponentSize << "\n";
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