#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n);
        vector<int> deg(n, 0);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            --u; --v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }
        int leaves = 0;
        vector<int> k(n, 0);          
        for (int i = 0; i < n; i++) {
            if (deg[i] == 1) {
                leaves++;
                int p = adj[i][0];
                k[p]++;
            }
        }
        long long sumC = 0;           
        for (int i = 0; i < n; i++) {
            sumC += 1LL * k[i] * (k[i] - 1) / 2;
        }
        int d2_valid = 0;             
        for (int i = 0; i < n; i++) {
            if (deg[i] == 2) {
                int a = adj[i][0], b = adj[i][1];
                if (deg[a] != 1 && deg[b] != 1) {
                    d2_valid++;
                }
            }
        }
        long long invalid = 1LL * leaves * (n - 2) - sumC + d2_valid;
        long long total = 1LL * n * (n - 1) * (n - 2) / 6;  
        cout << total - invalid << '\n';
    }
    return 0;


}
