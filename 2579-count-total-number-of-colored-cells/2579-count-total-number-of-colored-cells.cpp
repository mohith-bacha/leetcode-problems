class Solution {
public:
    long long coloredCells(int n) {
        long long out=1;
        if(n==0){
            return 0;
        }
        if(n==1){
            return out;
        }
        for(int i=1;i<n;i++){
            out=out+4*i;
        }
        return out;
    }
};