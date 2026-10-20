#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >>T;
    while(T--) {
        int N,K;
        cin >>N>>K;
        vector<int> A(N);
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }

        int l = 0, r = N - 1;
        bool possible = true;

        while(l < r) {
            if(A[l] == A[r]) {
                l++;
                r--;
            }
            else if(A[l] == K) {
                l++;
            }
            else if(A[r] == K) {
                r--;
            }
            else {
                possible = false;
                break;
            }
        }

        cout << (possible ? "Yes" : "No") << endl;
    }
}
