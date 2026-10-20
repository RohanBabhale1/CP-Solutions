class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        if(nums.size()<2){
            return {-1,-1};
        }
        unordered_map <int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        if(mp.size()<2){
            return{-1,-1};
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end());
        int fV=v[0].first;
        int fFr=v[0].second;

        for(int i=1;i<v.size();i++){
            if(v[i].second!=fFr){
                return {fV,v[i].first};
            }
        }
        return {-1,-1};
    }
};
