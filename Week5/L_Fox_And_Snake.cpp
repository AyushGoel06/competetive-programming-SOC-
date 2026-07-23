#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int totalRows, totalColumns;
    cin >> totalRows >> totalColumns;

    bool attachOnRight = true;

    for (int row = 1; row <= totalRows; row++) {
        if (row % 2 != 0) {
            cout << string(totalColumns, '#') << "\n";
        } else {
            if (attachOnRight) {
                cout << string(totalColumns - 1, '.') << "#\n";
            } else {
                cout << "#" << string(totalColumns - 1, '.') << "\n";
            }
            attachOnRight = !attachOnRight;
        }
    }

    return 0;
}