class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        
        int left = 0, summ = 0;
        for (int num : nums) summ += num;
        
        for (int i = 0; i < n; i++) {
            summ -= nums[i];
            res[i] = abs(left - summ);
            left += nums[i];
        }
        
        return res;
    }
};
