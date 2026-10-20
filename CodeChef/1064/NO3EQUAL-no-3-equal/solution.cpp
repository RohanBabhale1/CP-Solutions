#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        int ans = 0;

        for (int i = 0; i < N; ) {
            int j = i;

            while (j < N && S[j] == S[i])
                j++;

            int len = j - i;
            ans += len / 3;

            i = j;
        }

        cout << ans << '\n';
    }

    return 0;
}
