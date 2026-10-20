#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    if (cin >> T) {
        while (T--) {
            int X;
            cin >> X;
            int totalCost = 0;
            if (X <= 20) {
                totalCost = X * 10;
            } else {
                int costPhase1 = 200;
                int remainingRuns = X - 20;
                int ballsPhase2 = remainingRuns / 2;
                int costPhase2 = ballsPhase2 * 5;
                totalCost = costPhase1 + costPhase2;
            }
            cout <<totalCost<< endl;
        }
    }
    return 0;
}
