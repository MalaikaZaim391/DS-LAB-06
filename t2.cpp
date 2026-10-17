#include <iostream>
using namespace std;

void printRange(int n) {
    if (n <= 0) return; 
    printRange(n - 1);  
    cout << n << " ";   
}

int main() {
    int n = 7;
    cout << "Search range values from 1 to " << n << ": ";
    printRange(n);
    cout << endl;
    return 0;
}
