class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=m-1;
        int y=n-1;
        int r=m+n-1;
        while(y>=0){
            if(x>=0 && nums1[x]>nums2[y]){
                nums1[r]=nums1[x];
                x-=1;
            }
            else{
                nums1[r]=nums2[y];
                y-=1;
            }
            r--;
        }
    }
};