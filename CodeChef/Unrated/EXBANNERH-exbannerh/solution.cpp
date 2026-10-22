#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
const int N = 100005;
long long fact[N], inv[N], pw[N];

long long power(long long b, long long e) {
    long long r = 1;
    b %= MOD;
    while (e > 0) {
        if (e & 1) r = r * b % MOD;
        b = b * b % MOD;
        e >>= 1;
    }
    return r;
}

long long C(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * inv[k] % MOD * inv[n - k] % MOD;
}

long long side(int n, int m, vector<int>& r, vector<int>& c, int st) {
    int p = 0;
    for (int i = 0; i < n; i++) if (r[i] == 0) p++;
    int q = n - p;
    int c0 = 0;
    for (int j = 0; j < m; j++) if (c[j] == 0) c0++;
    long long res = 0;
    for (int k = st; k < n; k++) {
        long long ways;
        if (m % 2 == 0) ways = C(p, k) * pw[k] % MOD;
        else ways = C(n, k);
        long long term = ways * pw[(n - k - 1) * (m - 1)] % MOD;
        if (k % 2 == 1) res = (res - term + MOD) % MOD;
        else res = (res + term) % MOD;
    }
    long long last = 0;
    if (m % 2 == 0) {
        if (p == n && (c0 == 0 || c0 == m)) last = pw[n - 1];
    } else {
        if (q % 2 == 0) {
            if (c0 == m) last = 1;
        } else {
            if (c0 == 0) last = 1;
        }
    }
    if (n % 2 == 1) res = (res - last + MOD) % MOD;
    else res = (res + last) % MOD;
    return res;
}

int main() {
    fact[0] = 1;
    for (int i = 1; i < N; i++) fact[i] = fact[i - 1] * i % MOD;
    inv[N - 1] = power(fact[N - 1], MOD - 2);
    for (int i = N - 1; i > 0; i--) inv[i - 1] = inv[i] * i % MOD;
    pw[0] = 1;
    for (int i = 1; i < N; i++) pw[i] = pw[i - 1] * 2 % MOD;
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, m;
        scanf("%d %d", &n, &m);
        vector<int> r(n), c(m);
        int sr = 0, sc = 0;
        for (int i = 0; i < n; i++) {
            int x, y, z;
            scanf("%d %d %d", &x, &y, &z);
            r[i] = x;
            sr += x;
        }
        for (int j = 0; j < m; j++) {
            int x, y, z;
            scanf("%d %d %d", &x, &y, &z);
            c[j] = x;
            sc += x;
        }
        if ((sr + sc) % 2 != 0) {
            printf("0\n");
            continue;
        }
        long long ans = side(n, m, r, c, 0);
        ans = (ans + side(m, n, c, r, 1)) % MOD;
        for (int v = 0; v < 2; v++) {
            int rv = (v * m) % 2;
            int cv = (v * n) % 2;
            int P = 0, Q = 0;
            for (int i = 0; i < n; i++) if (r[i] == rv) P++;
            for (int j = 0; j < m; j++) if (c[j] == cv) Q++;
            for (int a = 1; a <= n; a++) {
                for (int b = 1; b <= m; b++) {
                    long long val;
                    if (a < n && b < m) {
                        if (a > P || b > Q) continue;
                        val = C(P, a) * C(Q, b) % MOD * pw[(n - a - 1) * (m - b - 1)] % MOD;
                    } else {
                        if (P == n && Q == m) val = C(n, a) * C(m, b) % MOD;
                        else val = 0;
                    }
                    if ((a + b) % 2 == 1) ans = (ans - val + MOD) % MOD;
                    else ans = (ans + val) % MOD;
                }
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
