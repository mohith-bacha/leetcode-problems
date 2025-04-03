class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n = nums.size();
        if (n < 3) return 0;

        vector<long long> leftMax(n, 0), rightMax(n, 0);
        leftMax[0] = nums[0];

        for (long long i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], (long long)nums[i]);
        }

        rightMax[n - 1] = nums[n - 1];
        for (long long i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], (long long)nums[i]);
        }

        long long ans = 0;
        for (long long i = 1; i < n - 1; i++) {
            long long left = leftMax[i - 1];
            long long right = rightMax[i + 1];
            ans = max(ans, (left - nums[i]) * right);
        }

        return ans;
    }
};
