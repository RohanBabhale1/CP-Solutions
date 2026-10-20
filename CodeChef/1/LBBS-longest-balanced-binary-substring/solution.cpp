#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int zeros = 0;
        int ones = 0;
        for (int j = i; j < n; j++) {
            if (s[j] == '0')
            zeros++;
            else
            ones++;
            int len = j - i + 1;
            if (len % 2 == 0) {
                int fp = abs(zeros - ones) / 2;
                if (fp <= k) {
                    ans = max(ans, len);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
