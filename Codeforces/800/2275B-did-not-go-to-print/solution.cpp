#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <numeric>
#include <queue>
#include <stack>
#include <iomanip>
#include <array>
#include <functional>
#include <bitset>
using namespace std;

void baseIO(string s = "") {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int subcount = 219;

#define ll long long
#define db long double
#define all(x) (x).begin(), (x).end()


int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        vector<bool> pr(N + 1, false);
        stack<int> mem;

        for (int i = 0; i < N; i++) {
            int doc = i+1;          
            char c = S[i];

            if (c == '1') {
                mem.push(doc); 
            } else if (c == '2') {
                if (!mem.empty()) {
                    pr[mem.top()] = true;
                    mem.pop();
                } else {
                    pr[doc] = true;  
                }
            } else {
                pr[doc] = true; 
            }
        }

        vector<int> ans;
        for (int i = 1; i <= N; i++)
            if (!pr[i]) ans.push_back(i);

        cout << ans.size() << '\n';
        for (int i = 0; i < (int)ans.size(); i++) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }

    return 0;
}
