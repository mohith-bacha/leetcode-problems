class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        map<int, int> freq;
        int repeated = -1, missing = -1;
        for (auto& row : grid) {
            for (int num : row) {
                freq[num]++;
                if (freq[num] == 2) {
                    repeated = num;
                }
            }
        }
        for (int i = 1; i <= n * n; i++) {
            if (freq[i] == 0) {
                missing = i;
                break;
            }
        }

        return {repeated, missing};
    }
};
