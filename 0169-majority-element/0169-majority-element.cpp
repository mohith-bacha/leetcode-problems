class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid=n/2;
        int count=0;
        for(int i=mid+1;i<n;i++){
            if(nums[mid]==nums[i]){
                count++;
            }
        }
        return nums[n/2];
    }
};