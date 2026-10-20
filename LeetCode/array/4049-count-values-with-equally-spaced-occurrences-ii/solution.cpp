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
            vector<int>indices=i.second;
            if(indices.size()>=3){
                int dif=indices[1]-indices[0];
                bool eql=true;
                for(int j=2;j<indices.size();j++){
                    if(indices[j]-indices[j-1]!=dif){
                        eql=false;
                        break;
                    }
                }
                if(eql){
                    count++;
                }
            }
        }
        return count;
    }
};
