#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int A[105];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    sort(A,A+n);
	    int m=n-k;
	    int mid=(m-1)/2;
	    int last=-1;
	    for (int i = 0; i <= k; i++) {
            int val = A[i + mid];
            if (i == 0 || val != last) {
                cout << val << " ";
                last = val;
            }
        }
	    cout<<endl;
	}
	return 0;

}
