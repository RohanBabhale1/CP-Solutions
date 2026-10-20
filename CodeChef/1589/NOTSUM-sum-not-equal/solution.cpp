#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;
        vector<pair<long long,int>> A(N);
        
        for(int i=0;i<N;i++){
            cin>>A[i].first;
            A[i].second=i+1;
        }

        sort(A.begin(),A.end());

        if(A[0].first==0 && A[N-1].first==0){
            cout<<-1<<endl;
        }
        else{
            cout<<A[N-1].second<<" "<<A[N-2].second<<" "<<A[0].second<<endl;
        }
    }
}
