class Solution {
public:
    bool carPooling(vector<vector<int>>& t, int c) {
        vector<int> p(1001, 0);
        for (auto& x:t)
        {
            p[x[1]]+=x[0];
            p[x[2]]-=x[0];
        }
        int cur=0;
        for(int i=0;i<=1000;i++)
        {
            cur += p[i];
            if (cur>c){
                return false;
            } 
        }
        return true;
    }
};
