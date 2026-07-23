#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int totalCards, totalQueries;
    cin >> totalCards >> totalQueries;

    vector<int> cardColors(totalCards);
    vector<int> firstOccurrence(51, 0);

    for (int i = 0; i < totalCards; i++) {
        cin >> cardColors[i];
        if (firstOccurrence[cardColors[i]] == 0) {
            firstOccurrence[cardColors[i]] = i + 1;
        }
    }

    for (int i = 0; i < totalQueries; i++) {
        int queryColor;
        cin >> queryColor;

        int currentPosition = firstOccurrence[queryColor];
        cout << currentPosition << (i == totalQueries - 1 ? "" : " ");

        for (int color = 1; color <= 50; color++) {
            if (firstOccurrence[color] > 0 && firstOccurrence[color] < currentPosition) {
                firstOccurrence[color]++;
            }
        }

        firstOccurrence[queryColor] = 1;
    }

    cout << "\n";

    return 0;
}