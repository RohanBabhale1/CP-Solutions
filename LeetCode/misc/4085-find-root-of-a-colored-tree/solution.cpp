class Solution {
public:
    int findColoredRoot(vector<vector<int>>& edges, string colors) {
        int t[88]={};
        t['B']=1;
        t['W']=2;
        int n=colors.size();
        vector<int>d(n),O(n);
        for(auto& e:edges){
            int x=t[colors[e[0]]],y=t[colors[e[1]]];
            if(x==y) return -1;
            if((x+1)%3==y){
                O[e[0]]++;
                d[e[1]]++;
            }else{
                O[e[1]]++;
                d[e[0]]++;
            }
        }
        int r=-1;
        for(int i=0;i<n;i++){
            if(d[i]>0) continue;
            if(r>=0 || O[i]>2) return -1;
            r=i;
        }
        return r;
    }
};
