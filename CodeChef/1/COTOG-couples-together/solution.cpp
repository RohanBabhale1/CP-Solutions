#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> A[i];
    }
    int ans = 0;
    for (int i = 0; i < 2 * n; i += 2) {
        if ((A[i] ^ 1) == A[i + 1]) {
            continue;
        }
        int partner = A[i] ^ 1;
        int j = i + 2;
        while (A[j] != partner) {
            j++;
        }
        swap(A[i + 1], A[j]);
        ans++;
    }
    cout << ans << endl;
    return 0;
}
