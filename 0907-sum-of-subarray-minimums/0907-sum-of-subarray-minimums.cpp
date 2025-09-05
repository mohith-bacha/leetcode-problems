class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int MOD=1e9+7;
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int mini=arr[i];
            for(int j=i;j<n;j++){
                mini=min(mini,arr[j]);
                sum+=mini%MOD;
            }
        }
        return sum;
    }
};