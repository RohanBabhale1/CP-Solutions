#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    if (cin >> T) {
        while (T--) {
            long long N, M;
            cin >> N >> M;

            if ((N + 1) % 3 == 0) {
                long long current = 1; 
                long long prev = 0;    
                
                for (int i = 1; i <= N; i++) {
                    cout << current << (i == N ? "" : " ");

                    long long next_val = (current - prev + M) % M;
                    prev = current;
                    current = next_val;
                }
                cout << "\n";
            } else {

                cout << -1 << "\n";
            }
        }
    }
    return 0;
}
