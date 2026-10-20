#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N + 1);
        int maxA = 0;
        for (int i = 1; i <= N; i++) {
            cin >> A[i];
            maxA = max(maxA, A[i]);
        }

        long long ans = 0;
        int maxM = min(101, maxA + 1);

        for (int M = 0; M <= maxM; M++) {
            bool inW[105] = {false};
            for (int v = 1; v <= 100; v++) {
                if (v < M && (v & 1)) inW[v] = true;
                else if (v > M + 1 && ((v - M - 1) & 1)) inW[v] = true;
            }
            int target = 1 ^ ((M / 2) & 1);

            vector<int> prefW(N + 1);
            prefW[0] = 0;
            for (int i = 1; i <= N; i++) {
                prefW[i] = prefW[i - 1] ^ (inW[A[i]] ? 1 : 0);
            }

            int start = 1;
            for (int i = 1; i <= N + 1; i++) {
                if (i == N + 1 || A[i] == M) {
                    int end = i - 1;
                    if (start <= end) {
                        if (M == 0) {
                            long long cnt[2] = {0, 0};
                            cnt[prefW[start - 1]] = 1;
                            for (int R = start; R <= end; R++) {
                                int desired = prefW[R] ^ target;
                                ans += cnt[desired];
                                cnt[prefW[R]]++;
                            }
                        } else {
                            int last[105] = {0};
                            int found = 0;
                            int min_val = 0, min_idx = -1;
                            long long cnt[2] = {0, 0};
                            int cur = start - 2;
                            for (int R = start; R <= end; R++) {
                                int v = A[R];
                                if (v < M) {
                                    if (last[v] == 0) found++;
                                    last[v] = R;
                                    if (found == M) {
                                        if (min_idx == -1) {
                                            min_val = R + 1;
                                            for (int u = 0; u < M; u++) {
                                                if (last[u] < min_val) {
                                                    min_val = last[u];
                                                    min_idx = u;
                                                }
                                            }
                                        } else if (v == min_idx) {
                                            min_val = R + 1;
                                            for (int u = 0; u < M; u++) {
                                                if (last[u] < min_val) {
                                                    min_val = last[u];
                                                    min_idx = u;
                                                }
                                            }
                                        } else {
                                            if (last[v] < min_val) {
                                                min_val = last[v];
                                                min_idx = v;
                                            }
                                        }
                                    }
                                }
                                if (found == M) {
                                    int min_last = min_val;
                                    while (cur < min_last - 1) {
                                        cur++;
                                        cnt[prefW[cur]]++;
                                    }
                                    int desired = prefW[R] ^ target;
                                    ans += cnt[desired];
                                }
                            }
                        }
                    }
                    start = i + 1;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
