#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int>pii;
typedef pair<ll,ll>pll;
typedef vector<int>vi;
typedef vector<ll>vll;
typedef vector<char>vc;
typedef vector<string>vs;
typedef map<int,int>mii;
typedef set<int>si;
typedef set<char>sc;

#define fo(i,s,e)for(long long int i=s;i<e;i++)
#define foru(a)for(auto&u:a)
#define pb push_back
#define f first
#define s second
#define sp<<""<<
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define all(a)(a).begin(),(a).end()
#define rall(a)(a).rbegin(),(a).rend()
#define test int tc;cin>>tc;while(tc--)
#define print(a){cout<<a<<endl;}
#define printv(a){for(auto u:a)cout<<u<<"";}
#define printm(a){for(auto u:a)cout<<u.f sp u.s<<endl;}
#define op()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a)cout.unsetf(ios::floatfield);cout.precision(a);cout.setf(ios::fixed,ios::floatfield);

const double eps=1e-9;

string to_upper(string a){
    for(auto&c:a)c=toupper(c);
    return a;
}

string to_lower(string a){
    for(auto&c:a)c=tolower(c);
    return a;
}

bool prime(ll a){
    if(a<2)return 0;
    for(ll i=2;i<=a/i;++i)
        if(a%i==0)return 0;
    return 1;
}

vector<bool>sieve(int n){
    vector<bool>p(n+1,1);
    p[0]=0;
    if(n>=1)p[1]=0;
    for(ll i=2;i*i<=n;i++){
        if(p[i]){
            for(ll j=i*i;j<=n;j+=i){
                p[j]=0;
}
}
}
    return p;
}

void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}


int n,q;
vector<long long>P,S;

long long calc(long long x){
    int lo=0,hi=n;
    while(lo<hi){
        int mid=(lo+hi+1)/2;
        if(1LL*mid*(mid+1)/2<=x)lo=mid;
        else hi=mid-1;
}
    long long r=x-1LL*lo*(lo+1)/2;
    return S[lo]+P[r];
}

void solve(){
    cin>>n>>q;
    P.assign(n+1,0);
    S.assign(n+1,0);
    for(int i=1;i<=n;i++){
        long long x;
        cin>>x;
        P[i]=P[i-1]+x;
        S[i]=S[i-1]+P[i];
}
    while(q--){
        long long l,r;
        cin>>l>>r;
        cout<<calc(r)-calc(l-1)<<"\n";
}
}


int main(){
	op();
    solve();
    //test{solve();}
	return 0;
}
