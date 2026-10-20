#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n,k; 
        cin>>n>>k;
        vector<int>C(n+1);
        for(int i=1;i<=n;i++){
            cin>>C[i];
        }
        int ans=INT_MAX;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                bool ok=true;
                for(int x=1;x<=n;x++)
                if(abs(x-i)>k && abs(x-j)>k){
                    ok=false;
                }
                if(ok){
                    ans=min(ans,C[i]+C[j]);
                }
            }
        }
        cout<<(ans==INT_MAX?-1:ans)<<"\n";
    }
}
