class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vec(n,vector<int> (n));
        int srow=0,erow=n-1,scol=0,ecol=n-1;
        int num=1;
        while(srow<=erow && scol<=ecol){
            for(int i=scol;i<=ecol;i++){
                vec[srow][i]=num++;
            }
            for(int i=srow+1;i<=erow;i++){
                vec[i][ecol]=num++;
            }
            for(int i=ecol-1;i>=scol;i--){
                if(srow==erow){
                    break;
                }
                vec[erow][i]=num++;;
            }
            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                vec[i][scol]=num++;
            }
            srow++,ecol--,erow--,scol++;

        }
        return vec;
    }
};