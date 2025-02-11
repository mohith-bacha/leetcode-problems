class Solution {
public:
    void generateSubsets(vector<int>& nums, vector<int>& current, int i, vector<vector<int>>& result){
        if (i==nums.size()) {  
            result.push_back(current);
            return;
        }
        current.push_back(nums[i]);
        generateSubsets(nums,current,i+1,result);
        current.pop_back();
        generateSubsets(nums,current,i+1,result);
    }

    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> result;
        vector<int> current;
        generateSubsets(nums,current,0,result);
        return result;
    }
};
