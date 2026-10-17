#include <iostream>
#include <string>
using namespace std;

const int R = 3;
const int C = 3;

bool searchWord(char grid[R][C], string word, int r, int c, int index, bool visited[R][C]) {
    if (index == word.length()) return true;

    if (r < 0 || r >= R || c < 0 || c >= C || visited[r][c] || grid[r][c] != word[index]) {
        return false;
    }

    visited[r][c] = true; 

    if (searchWord(grid, word, r - 1, c, index + 1, visited) ||
        searchWord(grid, word, r + 1, c, index + 1, visited) ||
        searchWord(grid, word, r, c - 1, index + 1, visited) ||
        searchWord(grid, word, r, c + 1, index + 1, visited)) {
        return true;
    }

    visited[r][c] = false; 
    return false;
}

int main() {
    char grid[R][C] = {
        {'C', 'A', 'T'},
        {'X', 'Y', 'Z'},
        {'M', 'N', 'O'}
    };
	
    string target = "CAT";
    bool visited[R][C] = {false};
    bool found = false;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == target[0]) {
                if (searchWord(grid, target, i, j, 0, visited)) {
                    found = true;
                    break;
                }
            }
        }
        if (found) break;
    }

    if (found) {
        cout << "The word \"" << target << "\" exists in the grid." << endl;
    } else {
        cout << "The word \"" << target << "\" was not found." << endl;
    }
    
    return 0;
}
