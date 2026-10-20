class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<vector<int>>rt;
        vector<vector<int>>group(n+1, vector<int>());
        for(int i = 0; i < n; ++i)
        {
            int num = groupSizes[i];
            group[num].push_back(i);
            if(group[num].size() == num)
            {
                rt.push_back(group[num]);
                group[num].clear();
            }
        }

        return rt;
    }
};
