class Solution {
public:
    int minimumRecolors(string blocks, int k)
    {
        int white_count = 0, min_recolors = INT_MAX;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') white_count++;
        }
        min_recolors = white_count;
        for (int i = k; i < blocks.size(); i++) {
            if (blocks[i - k] == 'W') white_count--;
            if (blocks[i] == 'W') white_count++;
            min_recolors = min(min_recolors, white_count);
        }
        
        return min_recolors;
    }
};
