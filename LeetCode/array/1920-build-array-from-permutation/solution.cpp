class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> array(nums.size());
        for (int i=0;i<nums.size();i++){
            int m=nums[i];
            array[i]=nums[m];
        }
        return array;
    };
};
