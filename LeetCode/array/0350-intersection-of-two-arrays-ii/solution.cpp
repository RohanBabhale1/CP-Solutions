class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>hm;
        vector<int>result;
        for(auto i:nums1){
            hm[i]++;
        }
        for(auto i:nums2){
            if(hm[i]>0){
                result.push_back(i);
                hm[i]--;
            }
        }
        return result;
    }
};
