class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len=nums.size();
        int i=0;
        if(k==0){
            return false;
        }
        while(i<len){
            int j=i+1;
            while(j<=i+k&&j<len){
            if(nums[i]==nums[j]){
                return true;
            }
                j++;
            }
           i++;
        }
        return false;
    }
};