#include <iostream>
using namespace std;

int main() {
    int x = 40;     // Declare and initialize an integer variable
    int *p = &x;  // Declare and initialize a pointer to the address of 'x'
    
    cout << *p << endl; // Print the value stored at the address in the pointer
    
    return 0;
}
