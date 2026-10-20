#include <bits/stdc++.h>
using namespace std;

int can(int days,vector<int>&A,int M){
    long long people=0;
    for(int x:A){
        people += x/days;
        
    }
    return people>=M;
}
int main() {
    int N,M;
    cin>>N>>M;
    vector<int>A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int low=1,high=*max_element(A.begin(), A.end());
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(can(mid,A,M)){
            ans=mid;
            low=mid+1;
            
        }else{
            high=mid-1;
        }
    }
	cout<<ans<<"\n";

}
