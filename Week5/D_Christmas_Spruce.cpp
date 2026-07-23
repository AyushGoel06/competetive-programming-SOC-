#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int totalVertices;
    cin >> totalVertices;

    vector<int> parent(totalVertices + 1);
    vector<int> childCount(totalVertices + 1, 0);
    vector<bool> isLeaf(totalVertices + 1, true);

    for (int i = 2; i <= totalVertices; i++) {
        cin >> parent[i];
        childCount[parent[i]]++;
        isLeaf[parent[i]] = false;
    }

    vector<int> leafChildCount(totalVertices + 1, 0);
    for (int i = 1; i <= totalVertices; i++) {
        if (isLeaf[i]) {
            leafChildCount[parent[i]]++;
        }
    }

    bool isValidSpruce = true;
    for (int i = 1; i <= totalVertices; i++) {
        if (!isLeaf[i]) {
            if (leafChildCount[i] < 3) {
                isValidSpruce = false;
                break;
            }
        }
    }

    if (isValidSpruce) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}