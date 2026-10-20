class Solution {
public:
    vector<int> memo;
    
    int tri(int i) {
        return i * (i + 1) / 2;
    }
    
    int getDays(int score) {
        if (score == 0){
            return 0;
        }
        if (memo[score] != -1){
            return memo[score];
        }
        int ans = INT_MAX;
        for (int i = 1; tri(i) <= score; i++){
            int remaining = score - tri(i);
            int days = i;
            if (remaining>0){
                days += 1;
                days += getDays(remaining);
            }
            ans=min(ans, days);
        }
        return memo[score] = ans;
    }
    
    int minDays(int n) {
        memo.assign(n + 1, -1);
        return getDays(n);
    }
};
