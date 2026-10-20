#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef set<int> si;
typedef set<char> sc;

#define fo(i,s,e) for(long long int i=s;i<e;i++)
#define foru(a) for(auto &u:a)
#define pb push_back
#define f first
#define s second
#define sp <<" "<<
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define test int tc; cin>>tc; while(tc--)
#define print(a) {cout<<a<<endl; }
#define printv(a) {for(auto u:a) cout<<u<<" "; }
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

const double eps = 1e-9;

string to_upper(string a) {
    for (auto &c : a) c = toupper(c);
    return a;
}

string to_lower(string a) {
    for (auto &c : a) c = tolower(c);
    return a;
}

bool prime(ll a) {
    if (a < 2) return 0;
    for (ll i = 2; i <= a / i; ++i)
        if (a % i == 0) return 0;
    return 1;
}

vector<bool> sieve(int n) {
    vector<bool> p(n + 1, 1);
    p[0] = 0;
    if (n >= 1) p[1] = 0;
    for (ll i = 2; i * i <= n; i++) {
        if (p[i]) {
            for (ll j = i * i; j <= n; j += i) {
                p[j] = 0;
            }
        }
    }
    return p;
}

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

void solve() {
    int n;
    cin >> n;
    vi p(n + 2), pg(n + 1, 0), st;
    for (int k = 1; k <= n; k++) {
        cin >> p[k];
        while (!st.empty() && p[st.back()] < p[k]) {
            st.pop_back();
        }
        if (k >= 2) {
            pg[k - 1] = st.empty() ? 0 : st.back();
        }
        st.pb(k);
    }
    pg[n] = 0;
    vector<vi> P(n + 1);
    for (int y = 0; y <= n; y++) {
        P[y].assign(n - y + 1, 0);
    }
    auto get = [&](int y, int x) -> int {
        return x < 0 ? 0 : P[y][x];
    };
    P[0][0] = 1;
    vll hv(n + 1, 0);
    for (int q = 1; q <= n; q++) {
        for (int a = 0; a <= q; a++) {
            int b = q - a;
            int lo = max(0, pg[q] - a);
            ll val = 0;
            if (b - 1 >= lo) {
                val = (get(a, b - 1) - get(a, lo - 1) + MOD) % MOD;
            }
            if (q == n) {
                hv[a] = val;
            }
            P[b][a] = (get(b, a - 1) + val) % MOD;
        }
    }
    vll ans(n + 1);
    for (int a = 0; a <= n; a++) {
        ans[a] = (hv[n - a] + hv[a]) % MOD;
    }
    printv(ans);
    cout << "\n";
}
int main() {
	op();
    // solve();
	test{solve();}
	return 0;
}
