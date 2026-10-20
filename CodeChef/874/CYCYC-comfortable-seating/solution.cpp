#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int mn = *min_element(A.begin(), A.end());
        int count = 0;
        
        for(int x:A){
            if(x==mn){
                count++;
            }
        }
        if(count>=2){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        

    }
    return 0;

}
