#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long k = N / 2;
        cout << k * (k + 1) << endl;
    }
    
    return 0;
}
