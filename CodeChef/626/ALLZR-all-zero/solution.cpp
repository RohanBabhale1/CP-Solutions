#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,A,B,C;
    cin>>T;
    while(T--){
        int n=0;
        cin>>A>>B>>C;
        
        B=B-2*A;
        A=0;
        while(C>0){
            C=C-3;
            n++;
        }
        if(C==0){
            B=B-n;
            if(B==0){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else{
            cout<<"No"<<endl;
        }
        
        
    }

}
