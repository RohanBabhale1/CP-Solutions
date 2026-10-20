#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++) cin >> P[i];
    bool sorted = true;
    for (int i = 0; i < N; i++) if (P[i] != i) { sorted = false; break; }
    if (sorted) {
        cout << 0 << '\n';
        return;
    }
    vector<int> pos(N);
    for (int i = 0; i < N; i++) pos[P[i]] = i;
    int m = -1;
    int minPos = pos[0], maxPos = pos[0];
    for (int v = 1; v < N; v++) {
        if (pos[v] > minPos && pos[v] < maxPos) {
            m = v;
            break;
        }
        minPos = min(minPos, pos[v]);
        maxPos = max(maxPos, pos[v]);
    }
    if (m == -1) {
        cout << -1 << '\n';
        return;
    }
    int p = pos[m];
    int k = -1;
    for (int cand = 2; cand < N; cand++) {
        if (cand == m || cand == p) continue;
        int cnt = 0;
        for (int v = 0; v < cand; v++) if (v != m) cnt++;
        if (cnt >= 2) {
            k = cand;
            break;
        }
    }
    vector<int> T(N, -1);
    T[p] = m;
    T[k] = k;
    vector<int> avail;
    for (int v = 0; v < k; v++) if (v != m) avail.push_back(v);
    int a = avail[0], b = avail[1];
    int idxLow = -1, idxHigh = -1;
    for (int i = 0; i < k; i++) {
        if (T[i] == -1) { idxLow = i; break; }
    }
    for (int i = N - 1; i > k; i--) {
        if (T[i] == -1) { idxHigh = i; break; }
    }
    T[idxLow] = a;
    T[idxHigh] = b;
    vector<bool> used(N, false);
    for (int i = 0; i < N; i++) if (T[i] != -1) used[T[i]] = true;
    vector<int> rem;
    for (int v = 0; v < N; v++) if (!used[v]) rem.push_back(v);
    int ptr = 0;
    for (int i = 0; i < N; i++) if (T[i] == -1) T[i] = rem[ptr++];
    cout << 2 << '\n';
    cout << N - 1 << '\n';
    for (int i = 0; i < N; i++) if (i != p) cout << i << ' ';
    cout << '\n';
    for (int i = 0; i < N; i++) if (i != p) cout << T[i] << ' ';
    cout << '\n';
    cout << N - 1 << '\n';
    for (int i = 0; i < N; i++) if (i != k) cout << i << ' ';
    cout << '\n';
    for (int i = 0; i < N; i++) if (i != k) cout << i << ' ';
    cout << '\n';
}
int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
