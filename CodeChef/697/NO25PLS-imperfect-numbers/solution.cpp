#include <bits/stdc++.h>
using namespace std;

bool isImperfect(int n) {
    return (n % 2 == 0 && n % 5 != 0) || (n % 5 == 0 && n % 2 != 0);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        int ans = INT_MAX;

        for (int i = 0; i <= 100; i++) {
            if (N - i >= 1 && isImperfect(N - i)) {
                ans = i;
                break;
            }
            if (isImperfect(N + i)) {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }
}
