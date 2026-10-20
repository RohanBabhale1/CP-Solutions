#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        vector<int> A(N);
        for (int &x : A) cin >> x;
        int sum = 0; bool good = true;
        for (int x : A) { sum += x; if (sum < 0) { good = false; break; } }
        if (good) { cout << "YES\n"; continue; }
        sum = 0; int p = -1;
        for (int i = 0; i < N; i++) {
            sum += A[i];
            if (sum < 0) { p = i; break; }
        }
        int minIdx = 0;
        for (int i = 1; i <= p; i++)
        if (A[i] < A[minIdx]) minIdx = i;
        sum = 0; good = true;
        for (int i = 0; i < N; i++) {
            if (i == minIdx) continue;
            sum += A[i];
            if (sum < 0) { good = false; break; }
        }
        cout << (good ? "YES" : "NO") << '\n';
    }
}
