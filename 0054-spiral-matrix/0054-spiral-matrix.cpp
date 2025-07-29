class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int srow=0,erow=m-1,scol=0,ecol=n-1;
        vector<int> arr;
        while(srow<=erow && scol<=ecol){
            for(int i=scol;i<=ecol;i++){
                arr.push_back(matrix[srow][i]);
            }
            for(int i=srow+1;i<=erow;i++){
                arr.push_back(matrix[i][ecol]);
            }
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow){
                    break;
                }
                arr.push_back(matrix[erow][i]);
            }
            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                arr.push_back(matrix[i][scol]);
            }
            srow++,erow--,scol++,ecol--;
        }
        return arr;
    }
};