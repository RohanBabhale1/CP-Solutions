#include <bits/stdc++.h>
using namespace std;
const int LOG = 20;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int V = n * m;
        vector<int> a(V);
        for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        cin >> a[i * m + j];
        if (a[0] == 0 || a[V - 1] == 0) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> dp(V), dep(V), idom(V, -1);
        vector<array<int, LOG>> up(V);
        auto lca = [&](int x, int y) {
            if (dep[x] < dep[y]) swap(x, y);
            int d = dep[x] - dep[y];
            for (int k = 0; k < LOG; k++)
            if (d >> k & 1)
            x = up[x][k];
            if (x == y) return x;
            for (int k = LOG - 1; k >= 0; k--) {
                if (up[x][k] != up[y][k]) {
                    x = up[x][k];
                    y = up[y][k];
                }
            }
            return up[x][0];
        };
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int v = i * m + j;
                if (a[v] == 0) continue;
                if (v == 0) {
                    dp[v] = 1;
                    idom[v] = v;
                    dep[v] = 0;
                    up[v].fill(v);
                    continue;
                }
                int p1 = -1, p2 = -1;
                if (i > 0) {
                    int p = v - m;
                    if (dp[p]) p1 = p;
                }
                if (j > 0) {
                    int p = v - 1;
                    if (dp[p]) {
                        if (p1 == -1) p1 = p;
                        else p2 = p;
                    }
                }
                if (p1 == -1) continue; 
                dp[v] = min(2, dp[p1] + (p2 == -1 ? 0 : dp[p2]));
                if (p2 == -1)
                idom[v] = p1;
                else
                idom[v] = lca(p1, p2);
                dep[v] = dep[idom[v]] + 1;
                up[v][0] = idom[v];
                for (int k = 1; k < LOG; k++)
                up[v][k] = up[up[v][k - 1]][k - 1];
            }
        }
        int t = V - 1;
        if (dp[t] < 2) {
            cout << -1 << '\n';
            continue;
        }
        int ans = 0;
        int lr = -1, lc = -1;
        for (int v = t;; v = idom[v]) {
            if (a[v] == 1) {
                int r = v / m;
                int c = v % m;
                if (r != lr && c != lc) {
                    ans++;
                    lr = r;
                    lc = c;
                }
            }
            if (v == 0) break;
        }
        cout << ans << '\n';
    }
}
