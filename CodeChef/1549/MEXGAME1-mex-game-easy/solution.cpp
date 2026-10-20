#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        vector<int> freq(102);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            freq[A[i]]++;
        }

        int mex = 0;

        while (freq[mex] > 0) {
            mex++;
        }

        long long moves = 0;

        for (int x = 1; x < mex; x++) {
            moves += 1LL * x * (freq[x] - 1);
        }

        for (int x = mex + 2; x <= 100; x++) {
            moves += 1LL * (x - mex - 1) * freq[x];
        }

        if (moves % 2 == 1) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }

    return 0;
}
