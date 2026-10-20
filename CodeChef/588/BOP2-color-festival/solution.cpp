#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int C[n];
        
        for(int i = 0; i < n; i++){
            cin >> C[i];
        }
        
        sort(C, C + n);
        
        int q = 0;
        for(int i = 0; i < n; i++){
            if(C[i] != C[i + 1]){
                q++;
            }
        }
        
        cout << q << endl;
    }
    
    return 0;
}
