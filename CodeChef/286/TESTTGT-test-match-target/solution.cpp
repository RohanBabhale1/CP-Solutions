#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int X, Y, Z;
   
    if (cin >> X >> Y >> Z) {
        
        int australiaTotal = X + Z;

        if (Y > australiaTotal) {
            cout << 0 << endl;
        } else {
            int runsNeeded = (australiaTotal + 1) - Y;
            cout << runsNeeded << endl;
        }
    }
    
    return 0;
}
