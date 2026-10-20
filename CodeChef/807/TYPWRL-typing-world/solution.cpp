#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        string S, L;
        cin >> S >> L;
        bool left[26] = {};
        for (char c : L)
        left[c - 'a'] = true;
        int ans = 0, cur = 0, prev = -1;
        for (char c : S) {
            int hand = left[c - 'a'] ? 0 : 1; 
            if (hand == prev)
            cur++;
            else {
                cur = 1;
                prev = hand;
            }
            ans = max(ans, cur);
        }
        cout << ans << '\n';
    }
    return 0;
}
