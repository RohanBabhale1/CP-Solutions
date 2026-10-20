#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        int sum = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            sum += A[i];
        }

        bool possible = false;

        for (int x : A) {
            if ((sum % 2) == (x % 2)) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "Yes" : "No") << '\n';
    }

    return 0;
}
