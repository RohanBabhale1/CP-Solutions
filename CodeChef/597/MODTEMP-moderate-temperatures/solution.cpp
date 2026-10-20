#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for(int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        int mn = *min_element(A.begin(), A.end());
        int mx = *max_element(A.begin(), A.end());
        
        int count = 0;
        for(int i = 0; i < N; i++) {
            if(A[i] != mn && A[i] != mx)
                count++;
        }
        
        cout << count << endl;
    }
}
