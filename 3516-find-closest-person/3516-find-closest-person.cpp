class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dif1=abs(x-z);
        int dif2=abs(y-z);
        if(dif1<dif2){
            return 1;
        }
        else if(dif2<dif1){
            return 2;
        }
        return 0;
    }
};