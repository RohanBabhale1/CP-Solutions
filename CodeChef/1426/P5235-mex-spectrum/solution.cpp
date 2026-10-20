#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n),freq(n+1,0);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        freq[a[i]]++;
	    }
	    int mex=0;
	    while(freq[mex]>0){
	        mex++;
	    }
	    vector<int>ans(n+1);
	    int missing=0;
	    for(int k=0;k<=n;k++){
	        if(k<mex){
	            ans[k]=freq[k];
	        }
	        else if(k==mex){
	            ans[k]=0;
	        }
	        else{
	            if(freq[k-1]==0){
	                missing++;
	            }
	            ans[k]=max(missing,freq[k]);
	        }
	    }
	   for(int x:ans){
	    cout<< x <<" ";
	   }
	   cout<<"\n";
	        
	   
	}

}
