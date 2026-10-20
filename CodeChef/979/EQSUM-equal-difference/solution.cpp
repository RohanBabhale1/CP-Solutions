#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        unordered_map<int, long > freq;

        for (int i = 0; i < N; i++) {
            int val = A[i] - i;
            freq[val]++;
        }

        long ans = 0;
        for (auto it : freq) {
            long k = it.second;
            ans += (k * (k - 1)) / 2;
        }

        cout << ans << "\n";
    }

}
