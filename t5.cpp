#include <iostream>
#include <string>
using namespace std;

const int V = 4; // Vertices: A=0, B=1, C=2, D=3

bool isSafe(int v, int graph[V][V], int color[], int c) {
    for (int i = 0; i < V; i++) {
        if (graph[v][i] && color[i] == c) {
            return false;
        }
    }
    return true;
}

bool graphColoringUtil(int graph[V][V], int m, int color[], int v) {
    if (v == V) return true; 

    for (int c = 1; c <= m; c++) {
        if (isSafe(v, graph, color, c)) {
            color[v] = c; 
            if (graphColoringUtil(graph, m, color, v + 1))
                return true;
            color[v] = 0; 
        }
    }
    return false;
}

int main() {
    int graph[V][V] = {
        {0, 1, 1, 0}, // A
        {1, 0, 1, 1}, // B
        {1, 1, 0, 1}, // C
        {0, 1, 1, 0}  // D
    };

    int m = 3; // 3 colors available (1: Red, 2: Green, 3: Blue)
    int color[V] = {0};

    string colorNames[] = {"", "Red", "Green", "Blue"};
    char deptNames[] = {'A', 'B', 'C', 'D'};

    if (graphColoringUtil(graph, m, color, 0)) {
        cout << "Graph coloring solution exists:" << endl;
        for (int i = 0; i < V; i++) {
            cout << "Department " << deptNames[i] << " -> " << colorNames[color[i]] << endl;
        }
    } else {
        cout << "No valid coloring exists." << endl;
    }

    return 0;
}
