#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int time = 0;   
        int work = 0;   
        while (work < n) {
            time++;
            if (time % k !=0){
                work++;
            }
        }
        cout<<time<< endl;
    }
    return 0;
}
