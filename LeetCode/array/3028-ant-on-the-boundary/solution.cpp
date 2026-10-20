class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum = 0, count = 0;
        bool check = false;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0) check = true;
            sum += nums[i];
            if(sum == 0 && check == true){
                count++;
            }
        }
        return count;
    }
};
