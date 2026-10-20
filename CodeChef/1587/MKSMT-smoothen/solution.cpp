#include<bits/stdc++.h>
using namespace std;

using ll = long long;
bool can(vector<ll>& a, ll x) {
    ll s = 0, prev = -1;
    for (ll v : a) {
        ll cur;
        if (v >= x) {
            s += v - x;
            cur = x;
        } else {
            ll add = min(s, x - v);
            s -= add;
            cur = v + add;
        }
        if (cur < prev) {
            return false;
        }
        prev = cur;
    }
    return true;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<ll> A(N);
        for (auto &x : A) {
            cin >> x;
        }
        if (is_sorted(A.begin(), A.end())) {
            cout << -1 << '\n';
            continue;
        }
        ll lo = 1, hi = *max_element(A.begin(), A.end());
        while (lo < hi) {
            ll mid = (lo + hi + 1) / 2;
            if (can(A, mid)) {
                lo = mid;
            } else {
                hi = mid - 1;
            }
        }
        cout << lo << '\n';
    }
    return 0;
}
