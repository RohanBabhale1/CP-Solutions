class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int i = 0;
        
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] % 2 == 0) {
                nums[j] = 0;
                swap(nums[i], nums[j]);
                i++;
            } else {
                nums[j] = 1;
            }
        }
        
        return nums;
    }
};
