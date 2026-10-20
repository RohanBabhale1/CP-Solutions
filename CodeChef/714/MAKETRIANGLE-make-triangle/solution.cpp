#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int x, y, z; 
        cin >> x >> y >> z;
        int a = min({x,y,z}), c = max({x,y,z});
        int b = x + y + z - a - c;
        cout << max(0, c - (a + b) + 1) << '\n';
    }
}
