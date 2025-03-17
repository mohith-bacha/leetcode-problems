class Solution {
public:
    int trailingZeroes(int n) {
        long long count=0;
        if(n==0 || n==1){
            return count;
        }
        while(n>0){
            count+=n/5;
            n/=5;
        }
        return count;
    }
};