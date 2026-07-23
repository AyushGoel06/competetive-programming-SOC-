#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int totalVertices;
    cin >> totalVertices;

    vector<int> parent(totalVertices + 1);
    for (int i = 1; i <= totalVertices; i++) {
        cin >> parent[i];
    }

    vector<int> permutation(totalVertices);
    for (int i = 0; i < totalVertices; i++) {
        cin >> permutation[i];
    }

    int rootNode = permutation[0];
    if (parent[rootNode] != rootNode) {
        cout << "-1\n";
        return;
    }

    vector<int> distanceFromRoot(totalVertices + 1, -1);
    vector<int> edgeWeight(totalVertices + 1, 0);

    distanceFromRoot[rootNode] = 0;

    for (int i = 0; i < totalVertices; i++) {
        int currentNode = permutation[i];
        int parentNode = parent[currentNode];

        if (distanceFromRoot[parentNode] == -1) {
            cout << "-1\n";
            return;
        }

        if (currentNode != rootNode) {
            distanceFromRoot[currentNode] = i;
            edgeWeight[currentNode] = distanceFromRoot[currentNode] - distanceFromRoot[parentNode];
        }
    }

    for (int i = 1; i <= totalVertices; i++) {
        cout << edgeWeight[i] << (i == totalVertices ? "" : " ");
    }
    cout << "\n";
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