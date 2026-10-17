#include <iostream>
using namespace std;

int calculateSavings(int n) {
    if (n <= 1) return 10; 
    return 2 * calculateSavings(n - 1); 
}

int main() {
    int day = 5;
    cout << "Amount available on Day " << day << ": Rs. " << calculateSavings(day) << endl;
    return 0;
}
