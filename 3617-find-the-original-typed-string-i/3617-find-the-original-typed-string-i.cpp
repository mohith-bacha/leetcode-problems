class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.length();
        int count=n;
        for(int i=0;i<n-1;i++){
            if(word[i]!=word[i+1]){
                count--;
            }
        }
        return count;
    }
};