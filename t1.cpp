#include <iostream>
#include <string>
using namespace std;

void printReverse(const string& str, int index) {
    if (index < 0) return; 
    cout << str[index];
    printReverse(str, index - 1); 
}

int main() {
    string msg = "Hello World";
    cout << "Original string: " << msg << endl;
    cout << "Reversed string: ";
    printReverse(msg, msg.length() - 1);
    cout << endl;
    return 0;
}
