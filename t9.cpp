#include <iostream>
using namespace std;

const int N = 4;

bool isSafe(int grid[N][N], int row, int col, int num) {
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num)
            return false;
    }

    int startRow = row - row % 2;
    int startCol = col - col % 2;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (grid[i + startRow][j + startCol] == num)
                return false;
        }
    }

    return true;
}

bool solveSudoku(int grid[N][N], int row, int col) {
    if (row == N - 1 && col == N) return true;

    if (col == N) {
        row++;
        col = 0;
    }

    if (grid[row][col] > 0)
        return solveSudoku(grid, row, col + 1);

    for (int num = 1; num <= N; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku(grid, row, col + 1)) return true;
            grid[row][col] = 0; // Backtrack
        }
    }

    return false;
}

int main() {
    int grid[N][N] = {
        {1, 0, 0, 4},
        {0, 4, 1, 0},
        {0, 1, 4, 0},
        {4, 0, 0, 1}
    };

    if (solveSudoku(grid, 0, 0)) {
        cout << "Solved 4x4 Sudoku:" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
