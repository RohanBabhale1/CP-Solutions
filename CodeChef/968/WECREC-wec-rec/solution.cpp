#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    if (cin >> T) {
        while (T--) {
            int N, X, K;
            cin >> N >> X >> K;
            map<int, int> clusterMap;
            for (int i = 0; i < N; i++) {
                int score;
                cin >> score;
                clusterMap[score]++;
            }
            vector<pair<int, int>> clusters;
            for (auto const& [score, count] : clusterMap) {
                clusters.push_back({score, count});
            }

            sort(clusters.rbegin(), clusters.rend());

            int eligibleCandidates = 0;

            int clustersToTake = min((int)clusters.size(), K);

            for (int i = 0; i < clustersToTake; i++) {
                eligibleCandidates += clusters[i].second;
            }

            cout << min(eligibleCandidates, X) << endl;
        }
    }
    return 0;
}
