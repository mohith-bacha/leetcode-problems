class Solution {
public:
    bool isFound(vector<vector<int>>& matrix, int target,int row){
        int n=matrix[0].size();
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(target==matrix[row][mid]){
                return true;
            }
            else if(target>matrix[row][mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int st=0,end=m-1;
        bool res=false;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){
                return res=isFound(matrix,target,mid);
            }
            else if(target>matrix[mid][n-1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};