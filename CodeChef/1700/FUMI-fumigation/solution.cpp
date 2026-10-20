#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main() {
    int T;
    cin >> T;
    while (T--) {
        ll N, A, B, C;
        cin >> N >> A >> B >> C;
        ll ans = LLONG_MAX;
        for (ll X = 1; X <= N; X++) {
            ll z1 = 1;
            ll z2 = (N - X) / X + 1;
            ll z3 = (N + X - 1) / X;
            for (ll Z : {z1, z2, z3}) {
                if (Z < 1) continue;
                ll Y = max(X, N - (Z - 1) * X);
                ll cost = A * X + B * Y + C * Z;
                ans = min(ans, cost);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
