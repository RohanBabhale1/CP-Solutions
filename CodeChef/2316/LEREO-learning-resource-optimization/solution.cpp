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
    int n, m, p;
    cin >>n>>m>>p;
    vector<vector<pair<int,int>>> grp(m + 1);
    vector<long long> sumv(m + 1, 0);
    fo(i, 0, n) {
        int a, pr, v;
        cin >> a >> pr >> v;
        grp[a].pb({pr, v});
        sumv[a] += v;
    }
    vector<int> b(m + 1);
    fo(j, 1, m + 1) cin >> b[j];

    vector<long long> dp(p + 1, 0); 
    fo(j, 1, m + 1) {
        vector<long long> nd = dp;
        for (auto &pv : grp[j]) {
            int pr = pv.first, v = pv.second;
            for (int c = p; c >= pr; c--)
                nd[c] = max(nd[c], nd[c - pr] + v);
        }
        if (b[j] <= p) {
            for (int c = p; c >= b[j]; c--)
                nd[c] = max(nd[c], dp[c-b[j]]+sumv[j]);
        }
        dp = nd;
    }
    print(dp[p]);
}

int main() {
	op();
    solve();
	// test{solve();}
	return 0;
}
