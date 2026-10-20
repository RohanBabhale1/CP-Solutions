#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

void displayScopes() {
    // Local variable
    int localVar = 20;

    // Accessing and printing both the global variable and local variable
    cout << localVar << endl;   // Should print 20
    cout << globalVar << endl; // Should print 10
}

int main() {
    // Calling the function
    displayScopes();

    // Accessing and printing the global variable
    // cout << globalVar << endl; // Should print 10

    // Trying to access the local variable here would cause an error as it's out of scope
    // cout << localVar << endl; // Uncommenting this line would cause a compilation error
}
