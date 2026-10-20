#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;
const int MAXN = 200005;

long long fact[MAXN];

long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

void solve() {
    long long n, k;
    cin >> n >> k;
  
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
    }
    
    long long ans = fact[k - 1];
    ans = (ans * power(k, n - k + 1)) % MOD;
    
    cout << ans << "\n";
}

int main() {
    precompute();
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
