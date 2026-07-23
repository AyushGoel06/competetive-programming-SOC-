#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gridRows, gridColumns, wallsToAdd;
int convertedWalls = 0;

int deltaRow[] = {-1, 1, 0, 0};
int deltaColumn[] = {0, 0, -1, 1};

void depthFirstSearch(int currentRow, int currentColumn, vector<string> &grid, vector<vector<bool>> &visited) {
    visited[currentRow][currentColumn] = true;

    for (int i = 0; i < 4; i++) {
        int nextRow = currentRow + deltaRow[i];
        int nextColumn = currentColumn + deltaColumn[i];

        if (nextRow >= 0 && nextRow < gridRows && nextColumn >= 0 && nextColumn < gridColumns) {
            if (grid[nextRow][nextColumn] == '.' && !visited[nextRow][nextColumn]) {
                depthFirstSearch(nextRow, nextColumn, grid, visited);
            }
        }
    }

    if (convertedWalls < wallsToAdd) {
        grid[currentRow][currentColumn] = 'X';
        convertedWalls++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> gridRows >> gridColumns >> wallsToAdd)) return 0;

    vector<string> grid(gridRows);
    int startRow = -1, startColumn = -1;

    for (int i = 0; i < gridRows; i++) {
        cin >> grid[i];
        for (int j = 0; j < gridColumns; j++) {
            if (grid[i][j] == '.' && startRow == -1) {
                startRow = i;
                startColumn = j;
            }
        }
    }

    vector<vector<bool>> visited(gridRows, vector<bool>(gridColumns, false));

    if (startRow != -1) {
        depthFirstSearch(startRow, startColumn, grid, visited);
    }

    for (int i = 0; i < gridRows; i++) {
        cout << grid[i] << "\n";
    }

    return 0;
}