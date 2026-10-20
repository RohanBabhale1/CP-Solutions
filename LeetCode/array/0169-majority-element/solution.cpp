class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int v=nums[0];
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(v==nums[i]){
                count++;
            }else{
                count--;
            }
            if(count==0){
                v=nums[i+1];
            }
        }
        int m=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==v){
                m++;
            }
        }
        if(m>nums.size()/2){
            return v;
        }
        return -1;
    }
    
};
