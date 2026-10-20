#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    if(cin>>t){
        while(t--){
            int n;
            cin>>n;
            vector<int>p(n),a;
            for (int &x : p) cin >> x;

            for (int x : p) {
                a.push_back(x);
                int j = a.size()-1;
                while (j > 0 && a[j]< a[j-1] && abs(a[j]-a[j-1])>1) {
                    swap(a[j], a[j-1]);
                    j--;
                }
            }

            for (int i = 0; i < n; i++) {
                cout << a[i] << (i == n - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }
    return 0;
}
