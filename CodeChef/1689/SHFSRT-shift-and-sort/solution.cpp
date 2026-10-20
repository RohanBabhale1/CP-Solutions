#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    if (!(cin >> T)){
        return 0;
    }

    while (T--){
        int N;
        cin >> N;
        vector<long long>A(N + 1);
        for (int i=1;i<=N;++i){
            cin >>A[i];
        }

        if(N == 1){
            cout << "Yes\n";
            continue;
        }

        const long long INF = 4e18; 
        vector<long long> dp(N + 1, INF);
        
        dp[0]=0;

        for(int i = 1; i <= N; ++i){

            if(A[i] >= dp[i - 1]){
                dp[i] = min(dp[i], A[i]);
            }

            if(i >= 2){
                long long sum_pair =A[i - 1]+A[i];
   
                long long max_prev = min(A[i - 1]-1,sum_pair/2);
                
                if (max_prev >= dp[i - 2]){
                    long long min_current = sum_pair-max_prev;
                    dp[i]=min(dp[i],min_current);
                }
            }
        }

        if(dp[N]!=INF){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }

    return 0;

}
