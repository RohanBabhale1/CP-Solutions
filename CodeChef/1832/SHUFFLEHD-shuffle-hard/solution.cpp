#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;
const int MAXN = 200000;

long long fact[MAXN + 5];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> Q(N + 1);
        for (int i = 1; i <= N; i++) cin >> Q[i];

        int m = N - K + 1;
        bool ok = true;

        for (int i = m + 1; i < N; i++) {
            if (Q[i] > Q[i + 1]) {
                ok = false;
                break;
            }
        }

        if (!ok || Q[m] > Q[m + 1]) {
            cout << 0 << '\n';
            continue;
        }

        long long total = 1;
        deque<pair<int, long long>> dq;
        dq.push_back({Q[m + 1], 1});

        for (int i = m - 1; i >= 1; i--) {
            int x = Q[i];
            int prev = Q[i + 1];

            if (x < prev) {
                long long old = total;
                total = total * K % MOD;
                long long add = old * (K - 1) % MOD;
                dq.push_front({prev, add});
            } else {
                while (!dq.empty() && dq.front().first <= x) {
                    total = (total - dq.front().second) % MOD;
                    if (total < 0) total += MOD;
                    dq.pop_front();
                }
            }
        }

        long long ans = total * fact[K] % MOD;
        cout << ans << '\n';
    }

    return 0;
}
