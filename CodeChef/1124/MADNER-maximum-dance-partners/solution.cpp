class Solution {
    public:
    int findMaximumPairs(const string &students) {
        int ans = 0;
        for (int i = 0; i < students.size() - 1; ) {
            if (students[i] != students[i + 1]) {
                ans++;
                i += 2;
            } else {
                i++;
            }
        }
        return ans;
    }
};
