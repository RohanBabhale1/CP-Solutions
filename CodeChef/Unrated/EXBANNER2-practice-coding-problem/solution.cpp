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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
    int n, m;
    cin >> n >> m;
    vi RX(n), CX(m);
    int tot = 0;
    fo(i, 0, n) {
        int x, y, z;
        cin >> x >> y >> z;
        RX[i] = x;
        tot ^= x;
    }
    fo(j, 0, m) {
        int x, y, z;
        cin >> x >> y >> z;
        CX[j] = x;
        tot ^= x;
    }
    if (tot) { print(-1); return; }

    // working matrix: a rows, b columns, a <= b
    bool swp = false;
    int a = n, b = m;
    vi pr = RX, pc = CX;
    if (a > b) {
        swap(a, b);
        swap(pr, pc);
        swp = true;
    }

    vc W((size_t)a * b);
    bool found = false;
    for (int att = 0; att < 300 && !found; att++) {
        vi xr(a, 0), cnt(a, 0);
        fo(j, 0, b - 1) {
            int w;
            do {
                int par = 0;
                w = 0;
                fo(i, 0, a - 1) {
                    int v = rng() & 1;
                    W[i * b + j] = v;
                    par ^= v;
                    w += v;
                }
                int last = par ^ pc[j];
                W[(a - 1) * b + j] = last;
                w += last;
            } while (w < 1 || w > a - 1);
            fo(i, 0, a) {
                xr[i] ^= W[i * b + j];
                cnt[i] += W[i * b + j];
            }
        }
        int wl = 0;
        fo(i, 0, a) {
            int v = pr[i] ^ xr[i];
            W[i * b + (b - 1)] = v;
            cnt[i] += v;
            wl += v;
        }
        bool ok = (wl >= 1 && wl <= a - 1);
        fo(i, 0, a) if (cnt[i] < 1 || cnt[i] > b - 1) ok = false;
        if (ok) found = true;
    }
    if (!found) { print(-1); return; }

    string out;
    if (!swp) {
        fo(i, 0, a) {
            fo(j, 0, b) { out += char('0' + W[i * b + j]); out += ' '; }
            out += '\n';
        }
    } else {
        fo(j, 0, b) {
            fo(i, 0, a) { out += char('0' + W[i * b + j]); out += ' '; }
            out += '\n';
        }
    }
    cout << out;
}

int main() {
	op();
    // solve();
	test{solve();}
	return 0;
}
