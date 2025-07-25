class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool> ar(n+1,true);
        ar[0]=ar[1]=false;
        for(int i=2;i<n;i++){
            if(ar[i]){
                count++;
                for(int j=2*i;j<n;j=j+i){
                    ar[j]=false;
                }
            }
        }
        return count;
    }
};