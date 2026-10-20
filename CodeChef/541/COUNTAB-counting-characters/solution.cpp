#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string S;
	    cin>>n;
	    cin>>S;
	    int acount=0,bcount=0;
	    for(char c:S){
	        if(c=='a'){
	            acount++;
	        }else{
	            bcount++;
	        }
	        
	    }
	    cout<<acount<<" "<<bcount<<endl;
	}
	return 0;

}
