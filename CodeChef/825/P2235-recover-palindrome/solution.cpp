#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    bool unique=true;
	    for(int i=0;i<n/2;i++){
	        if(s[i]=='?'&&s[n-i-1]=='?'){
	            unique=false;
	            break;
	        }
	    }
	    if(n%2==1&&s[n/2]=='?'){
	        unique=false;
	    }
	    cout<<(unique? "YES\n" : "No\n");
	}

}
