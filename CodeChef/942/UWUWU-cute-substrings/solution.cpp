#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >>T;
    while(T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int maxLen = 0;
        for(int L = 0;L< N; L++) {
            for(int R = L; R < N; R++) {
                int len = R - L + 1;
                if(len % 2 == 0){
                    continue;
                }

                bool valid =true;

                for(int i = L; i <= R; i++) {
                    if((i - L) % 2== 0) {
                        if(S[i] != 'u' && S[i] != 'o') {
                            valid = false;
                            break;
                        }
                    } else {
                        if(S[i] != 'w') {
                            valid = false;
                            break;
                        }
                    }
                }

                if(valid) {
                    maxLen =max(maxLen, len);
                }
            }
        }

        cout<<maxLen<<endl;
    }
}
