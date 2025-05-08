class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int tot=0,f=0;
        for(int i=0;i<n;i++)
        {
            tot+=nums[i];
            f+=i*nums[i];
        }
        int maxi=f;
        for (int i=1;i<n;i++)
        {
            f=f+tot-n*nums[n-i];
            maxi=max(maxi,f);
        }
        return maxi;
    }
};
