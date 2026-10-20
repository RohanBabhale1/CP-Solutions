#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n,q;
    cin>>n>>q;

    vector<ll> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
    } 

    sort(A.begin(), A.end());

    vector<ll> diff;
    for (int i=1;i<n;i++){
        diff.push_back(A[i]-A[i-1]);
    }

    sort(diff.begin(),diff.end());

    vector<ll>pref(n, 0);
    for (int i = 0;i<diff.size();i++) {
        pref[i+1]=pref[i]+diff[i];
    }

    while (q--) {
        ll X;
        cin >> X;
        int k = lower_bound(diff.begin(),diff.end(),X)-diff.begin();
        ll ans = X+pref[k]+(ll)(diff.size()-k)*X;
        cout<<ans<<"\n";
    }

    return 0;

}
