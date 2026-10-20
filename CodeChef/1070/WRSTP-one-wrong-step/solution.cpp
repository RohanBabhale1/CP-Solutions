#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x = 0, y = 0;
        string s;
        cin >> n >> s;
        for (char c : s) {
            if (c == 'U') y++;
            else if (c == 'D') y--;
            else if (c == 'L') x--;
            else x++;
        }
        bool ok = false;
        if (x == 2 && y == 0) ok = s.find('R') != string::npos;
        else if (x == -2 && y == 0) ok = s.find('L') != string::npos;
        else if (x == 0 && y == 2) ok = s.find('U') != string::npos;
        else if (x == 0 && y == -2) ok = s.find('D') != string::npos;
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
