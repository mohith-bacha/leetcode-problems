class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tot=0;
        int maxi=INT_MIN;
        for(auto x:nums){
            tot+=x;
            maxi=max(maxi,tot);
            if(tot<0){
                tot=0;
            }

        }
        return maxi;
    }
};