class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        if(s.length()!=t.length()){
            return false;
        }
        for(char ch:s){
            mp1[ch]++;
        }
        for(char ch:t){
            mp2[ch]++;
        }
        return mp1==mp2;
    }
};