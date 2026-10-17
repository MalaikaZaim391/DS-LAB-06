#include <iostream>
using namespace std;

const int N = 4;

bool isSafe(int maze[N][N], int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
}

bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]) {
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1) {
        sol[x][y] = 1; 
        return true;
    }

    if (isSafe(maze, x, y)) {
        if (sol[x][y] == 1) return false;

        sol[x][y] = 1; 

        // Move Right
        if (solveMazeUtil(maze, x, y + 1, sol)) return true;

        // Move Down
        if (solveMazeUtil(maze, x + 1, y, sol)) return true;

        sol[x][y] = 0; // Backtrack
        return false;
    }

    return false;
}

int main() {
    int maze[N][N] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int sol[N][N] = {0};

    if (solveMazeUtil(maze, 0, 0, sol)) {
        cout << "Path found in the maze:" << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution path exists." << endl;
    }

    return 0;
}
