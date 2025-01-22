class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
        vector<vector<int>> height(m,vector<int>(n, -1));
        queue<pair<int, int>> q;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (isWater[i][j] == 1) {
                    height[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();

            for (const auto& [di, dj] : directions) {
                int x = i + di;
                int y = j + dj;

                if (x >= 0 && x < m && y >= 0 && y < n && height[x][y] == -1) {
                    height[x][y] = height[i][j] + 1;
                    q.push({x, y});
                }
            }
        }

        return height;
    }
};
