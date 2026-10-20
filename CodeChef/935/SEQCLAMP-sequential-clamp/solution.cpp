#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,X=9;
	cin>>T;
	while(T--){
	    int N,Y=X;
	    int A,B;
	    cin>>N;
	    while(N--){
	        
	        cin>>A>>B;
	        
	        if(Y>B){
	            Y=B;
	        }else if(Y<A){
	            Y=A;
	        }
	    }
	    cout<<Y<<endl;
	}
}
