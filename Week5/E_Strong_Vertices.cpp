#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int totalElements;
    cin >> totalElements;

    vector<long long> arrayA(totalElements);
    for (int i = 0; i < totalElements; i++) {
        cin >> arrayA[i];
    }

    vector<long long> arrayB(totalElements);
    for (int i = 0; i < totalElements; i++) {
        cin >> arrayB[i];
    }

    long long maxDifference = -2e18;
    vector<long long> difference(totalElements);

    for (int i = 0; i < totalElements; i++) {
        difference[i] = arrayA[i] - arrayB[i];
        if (difference[i] > maxDifference) {
            maxDifference = difference[i];
        }
    }

    vector<int> strongVertices;
    for (int i = 0; i < totalElements; i++) {
        if (difference[i] == maxDifference) {
            strongVertices.push_back(i + 1);
        }
    }

    cout << strongVertices.size() << "\n";
    for (int i = 0; i < (int)strongVertices.size(); i++) {
        cout << strongVertices[i] << (i == (int)strongVertices.size() - 1 ? "" : " ");
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