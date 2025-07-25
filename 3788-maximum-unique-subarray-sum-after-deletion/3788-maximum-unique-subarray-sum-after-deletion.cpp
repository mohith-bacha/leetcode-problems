class Solution {
public:
    int maxSum(vector<int>& nums) {
        bool allNegative=true;
        int maxi=INT_MIN;
        for(auto it:nums){
            if(it>=0){
                allNegative=false;
            }
            if(it>maxi){
                maxi=it;
            }
        }
        if(allNegative){
            return maxi;
        }
        set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        int sum=0;
        for(auto it:st){
            if(it>0){
                sum+=it;
            }
        }

        return sum;
    }
};