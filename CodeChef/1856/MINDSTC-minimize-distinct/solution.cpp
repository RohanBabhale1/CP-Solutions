#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    if (!(cin >> T)) return 0;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        vector<int> S;
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
            S.push_back(A[i]);
        }

        sort(S.begin(), S.end());
        S.erase(unique(S.begin(), S.end()), S.end());

        int k = S.size();
        
        vector<int> can_collide(k, 0); 
        for (int i = 0; i < k; ++i) {
            if (i + 3 < k && S[i+1] == S[i]+1 && S[i+2] == S[i]+2 && S[i+3] == S[i]+3) {
                can_collide[i] = 2;
            }
            else if (i + 1 < k) {
                // Check if x and x+2 exist in S
                if (S[i+1] == S[i] + 2) {
                    can_collide[i] = max(can_collide[i], 1);
                }
                if (i + 2 < k && S[i+2] == S[i] + 2) {
                    can_collide[i] = max(can_collide[i], 1);
                }
            }
        }

        vector<int> suffix_max(k + 1, 0);
        for (int i = k - 1; i >= 0; --i) {
            suffix_max[i] = max(suffix_max[i+1], can_collide[i]);
        }

        for (int L = 1; L <= N; ++L) {
            auto it = lower_bound(S.begin(), S.end(), L);
            int idx = distance(S.begin(), it);

            int max_reduction = 0;
            if (idx < k) {
                max_reduction = suffix_max[idx];
            }
            
            cout << k - max_reduction << (L == N ? "" : " ");
        }
        cout << "\n";
    }

    return 0;

}
