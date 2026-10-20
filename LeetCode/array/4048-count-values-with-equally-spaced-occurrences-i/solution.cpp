class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> ind;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int cur=nums[i];
            ind[cur].push_back(i);
        }
        for(auto i:ind){
            if(i.second.size()==3){
                if((i.second[1]-i.second[0])==(i.second[2]-i.second[1])){
                count++;
                }
            }
        }
        return count;
    }
};
