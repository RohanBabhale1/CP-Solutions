class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<vector<int>> buckets(nums.size() + 1);
        for(int i = 0; i < nums.size(); i++) freq[nums[i]]++;

        for(auto& p: freq){
            buckets[p.second].push_back(p.first);
        }

        vector<int> res;

        for(int i = nums.size(); i >= 0; i--){
            for(auto& bucket: buckets[i]){
                res.push_back(bucket);
                if(res.size() == k) return res;
            }
        }

        return res;
    }
};
