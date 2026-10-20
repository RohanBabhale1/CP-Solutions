#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        set<int> seats;

        for (int i = 0; i < M; i++) {
            int x;
            cin >> x;
            seats.insert(x);
        }

        
        for (int person = 0; person < K; person++) {
            for (int seat = 1; seat <= N; seat++) {
                if (seats.find(seat) == seats.end()) {
                    cout << seat << " ";
                    seats.insert(seat);
                    break;
                }
            }
        }

        cout << '\n';
    }

    return 0;
}
