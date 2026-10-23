
class Solution {
public:
    typedef pair<int, pair<int, int>> pp;

    int trapRainWater(vector<vector<int>>& h) {
        int n = h.size(), m = h[0].size();

        priority_queue<pp, vector<pp>, greater<>> pq;
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        // Add boundary cells
        for (int i = 0; i < n; i++) {
            pq.push({h[i][0], {i, 0}});
            pq.push({h[i][m - 1], {i, m - 1}});
            vis[i][0] = vis[i][m - 1] = true;
        }

        for (int j = 1; j < m - 1; j++) {
            pq.push({h[0][j], {0, j}});
            pq.push({h[n - 1][j], {n - 1, j}});
            vis[0][j] = vis[n - 1][j] = true;
        }

        int ans = 0;
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, -1, 0, 1};

        while (!pq.empty()) {
            auto [height, pos] = pq.top();
            pq.pop();

            int r = pos.first, c = pos.second;

            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i], nc = c + dc[i];

                if (nr < 0 || nr >= n || nc < 0 || nc >= m ||
                    vis[nr][nc])
                    continue;

                vis[nr][nc] = true;
                ans += max(0, height - h[nr][nc]);

                pq.push({max(height, h[nr][nc]), {nr, nc}});
            }
        }

        return ans;
    }
};
