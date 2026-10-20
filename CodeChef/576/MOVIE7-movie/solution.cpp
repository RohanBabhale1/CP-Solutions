#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b,c;
        cin>>n>>m>>a>>b>>c;
        int combo=min(n,m);
        int cost=combo*c+(n-combo)*a+(m-combo)*b;
        cout<<cost<<endl;
    }
	return 0;

}
