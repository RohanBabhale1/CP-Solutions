#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> sum(N, 0);

        int p = 0, dir = 1;

        for (int card = K; card >= 1; card--) {
            sum[p] += card;

            if (dir == 1 && p == N - 1) {
                dir = -1;
            }
            else if (dir == -1 && p == 0) {
                dir = 1;
            }
            else {
                p += dir;
            }
        }

        int ans = 0;
        for (int x : sum)
            ans = max(ans, x);

        cout << ans << "\n";
    }

    return 0;
}
