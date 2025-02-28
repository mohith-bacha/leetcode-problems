class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        int majority = 0, maxCount = 0;

        for (int num : nums) {
            freq[num]++;
            if (freq[num] > maxCount) {
                maxCount = freq[num];
                majority = num;
            }
        }

        return majority;
    }
};
