#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n + 2);
    nums[0] = 1;
    nums[n + 1] = 1;
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));
    for (int len = 2; len <= n + 1; len++) {
        for (int l = 0; l + len <= n + 1; l++) {
            int r = l + len;
            for (int k = l + 1; k < r; k++) {
                int coins = dp[l][k]
                + dp[k][r]
                + nums[l] * nums[k] * nums[r];
                dp[l][r] = max(dp[l][r], coins);
            }
        }
    }
    cout << dp[0][n + 1] << endl;
    return 0;
}
