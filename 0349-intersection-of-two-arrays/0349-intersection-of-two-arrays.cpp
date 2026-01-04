class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a(nums1.begin(),nums1.end());
        vector<int> arr;
        for(auto it:nums2){
            if (a.count(it)) {
                arr.push_back(it);
                a.erase(it);
            }
        }
        return arr;
    }
};