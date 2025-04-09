class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(nums[0]<k){
            return -1;
        }
        int n=nums.size();
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int count=0;
        for(auto it:st){
            if(it>k){
                count++;
            }
        }
        return count;
    }
};
