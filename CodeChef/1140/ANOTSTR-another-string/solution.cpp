#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string a, b;
        cin >> n >> a >> b;
        int ca = 0, cb = 0;
        for (char c : a) ca += c == '1';
        for (char c : b) cb += c == '1';
        cout << ((ca % 2 == cb % 2) ? "YES\n" : "NO\n");
    }
    return 0;
}
