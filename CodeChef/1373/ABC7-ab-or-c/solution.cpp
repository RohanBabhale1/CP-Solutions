#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<pair<int,int>>v;
	    for(int i=0;i<n;i++){
	        int a,b,c;
	        cin>>a>>b>>c;
	        v.push_back({a, i});
            v.push_back({b, i});
            v.push_back({c, i});
	    }
	    sort(v.begin(),v.end());
	    vector<int>count(n,0);
	    int covered=0;
	    int left=0;
	    int ans=1e9;
	    for (int right = 0; right < 3*n; right++) {
            int idx = v[right].second;

            if (count[idx] == 0) covered++;
            count[idx]++;

            while (covered==n) {
                int range = v[right].first - v[left].first;
                ans = min(ans, range);

                int left_idx = v[left].second;
                count[left_idx]--;

                if (count[left_idx] == 0) covered--;

                left++;
            }
        }

        cout << ans << "\n";
	}

}
