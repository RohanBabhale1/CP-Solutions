#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long u64;
int main() {
	int T; cin >> T;
	while (T--) {
	    int N, K; cin >> N >> K;
	    int V = N + (N & 1);                 
	    vector<u64> adj(V, 0);
	    for (int a = 1; a <= N; a++)
	    for (int b = a + 1; b <= N; b++) {
	        int p = a * b, s = (int)sqrt(p);
	        if (abs(p - s*s) <= K || abs(p - (s+1)*(s+1)) <= K) {
	            adj[a-1] |= 1ULL << (b-1);
	            adj[b-1] |= 1ULL << (a-1);
	        }
	    }
	    int dm = (N & 1) ? N : -1;
	    if (dm >= 0)
	    for (int i = 0; i < N; i++)
	    adj[i] |= 1ULL << dm, adj[dm] |= 1ULL << i;
	    u64 all = (V == 64) ? ~0ULL : (1ULL << V) - 1;
	    vector<pair<int,int>> pr;
	    function<bool(u64)> go = [&](u64 used) -> bool {
	        if (used == all) return true;
	        u64 rem = all & ~used;
	        int u = -1, best = 100;
	        for (u64 r = rem; r; r &= r - 1) {          
	            int i = __builtin_ctzll(r);
	            int d = __builtin_popcountll(adj[i] & rem);
	            if (d < best) { best = d; u = i; if (!d) return false; }
	        }
	        for (u64 r = adj[u] & rem; r; r &= r - 1) {
	            int v = __builtin_ctzll(r);
	            pr.push_back({u, v});
	            if (go(used | (1ULL << u) | (1ULL << v))) return true;
	            pr.pop_back();
	        }
	        return false;
	    };
	    if (!go(0)) { cout << "-1\n"; continue; }
	    vector<int> res; int lone = -1;
	    for (auto &p : pr) {
	        if (p.first == dm)  lone = p.second + 1;
	        else if (p.second == dm) lone = p.first + 1;
	        else res.push_back(p.first + 1), res.push_back(p.second + 1);
	    }
	    if (dm >= 0) res.push_back(lone);
	    for (int i = 0; i < (int)res.size(); i++) {
	        if (i) cout << ' ';
	        cout << res[i];
	    }
	    cout << '\n';
	}

}
