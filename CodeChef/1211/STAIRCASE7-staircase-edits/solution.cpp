#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        map<int, int> frequency;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            frequency[x - i]++;
        }

        int maximum = 0;

        for (auto p : frequency) {
            maximum = max(maximum, p.second);
        }

        cout << N - maximum << '\n';
    }

    return 0;
}
