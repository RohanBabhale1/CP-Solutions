class Solution {
public:
    int balancedStringSplit(string s) {
        int total = 0;
        int k = 0;
        for(auto  i : s)
        {
            if(i == 'L') total -= 1;
            else total += 1;
            if(total == 0) k++;
        }
        return k;
    }
};
