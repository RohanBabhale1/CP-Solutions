#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        int ans = 0;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {

                int maxPrice = max(A[i], A[j]);
                int minPrice = min(A[i], A[j]);

                int discount = min(maxPrice / 2, 100);
                int totalCost = minPrice + (maxPrice - discount);

                if (totalCost <= K) {
                    ans = max(ans, B[i] + B[j]);
                }
            }
        }

        cout << ans << endl;
    }
}
