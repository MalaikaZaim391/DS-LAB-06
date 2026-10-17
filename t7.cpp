#include <iostream>
using namespace std;

bool subsetSum(int arr[], int n, int target, int index, int currentSubset[], int subsetSize) {
    if (target == 0) { 
        cout << "Valid subset found: { ";
        for (int i = 0; i < subsetSize; i++) {
            cout << currentSubset[i] << " ";
        }
        cout << "}" << endl;
        return true;
    }

    if (index == n || target < 0) return false;

    // Option 1: Include current element
    currentSubset[subsetSize] = arr[index];
    if (subsetSum(arr, n, target - arr[index], index + 1, currentSubset, subsetSize + 1)) {
        return true;
    }

    // Option 2: Exclude current element (Backtrack)
    if (subsetSum(arr, n, target, index + 1, currentSubset, subsetSize)) {
        return true;
    }

    return false;
}

int main() {
    int set[] = {2, 3, 5, 6, 8};
    int n = 5;
    int target = 9;
    int currentSubset[5];

    if (!subsetSum(set, n, target, 0, currentSubset, 0)) {
        cout << "No subset exists with the given sum." << endl;
    }

    return 0;
}
