#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void depthFirstSearch(int currentNode, const vector<vector<int>> &adjacencyList, const vector<int> &initialColors, vector<bool> &visited, vector<int> &componentColors) {
    visited[currentNode] = true;
    componentColors.push_back(initialColors[currentNode]);

    for (int neighbor : adjacencyList[currentNode]) {
        if (!visited[neighbor]) {
            depthFirstSearch(neighbor, adjacencyList, initialColors, visited, componentColors);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int totalSocks, totalDays, totalColors;
    if (!(cin >> totalSocks >> totalDays >> totalColors)) return 0;

    vector<int> initialColors(totalSocks + 1);
    for (int i = 1; i <= totalSocks; i++) {
        cin >> initialColors[i];
    }

    vector<vector<int>> adjacencyList(totalSocks + 1);
    for (int i = 0; i < totalDays; i++) {
        int leftSock, rightSock;
        cin >> leftSock >> rightSock;
        adjacencyList[leftSock].push_back(rightSock);
        adjacencyList[rightSock].push_back(leftSock);
    }

    vector<bool> visited(totalSocks + 1, false);
    int socksToChange = 0;

    for (int i = 1; i <= totalSocks; i++) {
        if (!visited[i]) {
            vector<int> componentColors;
            depthFirstSearch(i, adjacencyList, initialColors, visited, componentColors);

            int componentSize = componentColors.size();
            if (componentSize > 1) {
                sort(componentColors.begin(), componentColors.end());
                
                int maxColorFrequency = 1;
                int currentFrequency = 1;
                
                for (size_t j = 1; j < componentSize; j++) {
                    if (componentColors[j] == componentColors[j - 1]) {
                        currentFrequency++;
                    } else {
                        maxColorFrequency = max(maxColorFrequency, currentFrequency);
                        currentFrequency = 1;
                    }
                }
                maxColorFrequency = max(maxColorFrequency, currentFrequency);
                
                socksToChange += (componentSize - maxColorFrequency);
            }
        }
    }

    cout << socksToChange << "\n";

    return 0;
}