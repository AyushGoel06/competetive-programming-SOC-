#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int totalVertices;
    cin >> totalVertices;

    vector<int> degree(totalVertices + 1, 0);
    vector<vector<int>> adjacencyList(totalVertices + 1);

    for (int i = 0; i < totalVertices - 1; i++) {
        int firstVertex, secondVertex;
        cin >> firstVertex >> secondVertex;
        degree[firstVertex]++;
        degree[secondVertex]++;
        adjacencyList[firstVertex].push_back(secondVertex);
        adjacencyList[secondVertex].push_back(firstVertex);
    }

    int verticesWithDegreeGreaterThanTwo = 0;
    int hubVertex = 1;

    for (int i = 1; i <= totalVertices; i++) {
        if (degree[i] > 2) {
            verticesWithDegreeGreaterThanTwo++;
            hubVertex = i;
        }
    }

    if (verticesWithDegreeGreaterThanTwo > 1) {
        cout << "No\n";
        return 0;
    }

    vector<int> leaves;
    for (int i = 1; i <= totalVertices; i++) {
        if (degree[i] == 1) {
            leaves.push_back(i);
        }
    }

    cout << "Yes\n";

    if (verticesWithDegreeGreaterThanTwo == 0) {
        cout << 1 << "\n";
        cout << leaves[0] << " " << leaves[1] << "\n";
    } else {
        cout << leaves.size() << "\n";
        for (int leaf : leaves) {
            cout << hubVertex << " " << leaf << "\n";
        }
    }

    return 0;
}