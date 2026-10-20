#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >>n;

        vector<long long> a(n);
        long long tot = 0;

        for (auto &x:a){
            cin>>x;
            tot+=x;
        }

        sort(a.begin(),a.end());

        long long left=0,ans= 0;

        for (int i = 0; i < n - 1; i++) {
            left += a[i];
            long long right=tot - left;

            ans = max(ans,
                left*(n-i-1)+right*(i+ 1));
        }

        cout<<ans<<'\n';
    }
}
