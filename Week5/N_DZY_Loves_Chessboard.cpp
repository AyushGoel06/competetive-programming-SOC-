#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int totalRows, totalColumns;
    if (!(cin >> totalRows >> totalColumns)) return 0;

    vector<string> grid(totalRows);
    for (int row = 0; row < totalRows; row++) {
        cin >> grid[row];
        for (int col = 0; col < totalColumns; col++) {
            if (grid[row][col] == '.') {
                if ((row + col) % 2 == 0) {
                    grid[row][col] = 'B';
                } else {
                    grid[row][col] = 'W';
                }
            }
        }
    }

    for (int row = 0; row < totalRows; row++) {
        cout << grid[row] << "\n";
    }

    return 0;
}