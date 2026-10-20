#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        string A, B;
        cin >> A >> B;
        vector<int> posA,posB;
        for (int i = 0; i<n;i++) {
            if (A[i] == '1')
                posA.push_back(i);
            if (B[i] == '1')
                posB.push_back(i);
        }
        if (posA.size()!=posB.size()) {
            cout << -1 << endl;
            continue;
        }

        int ans = 0;

        for (int i=0;i<posA.size();i++) {
            if (posA[i]!=posB[i])
                ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}
