#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; long long l, r;
    cin >> n >> l >> r;
    vector<long long> pref(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> pref[i];
        pref[i] += pref[i-1];
    }
    vector<int> dp(n+1, 0);
    for (int i = n-1; i >= 0; i--) {
        int best = dp[i+1];  
        auto itl = lower_bound(pref.begin()+i+1, pref.end(), pref[i]+l);
        auto itr = upper_bound(pref.begin()+i+1, pref.end(), pref[i]+r);
        if (itl < itr) {
            int kl = itl - pref.begin() - i;  
            best = max(best, 1 + dp[i + kl]);
        }
        dp[i] = best;
    }
    cout << dp[0] << "\n";
    return 0;
}
