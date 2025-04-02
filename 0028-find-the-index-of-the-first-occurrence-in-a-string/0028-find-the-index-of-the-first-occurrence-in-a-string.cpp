class Solution {
public:
    int strStr(string haystack,string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(n<m){
            return -1;
        }
        for (int i = 0; i<= haystack.length() - needle.length(); ++i) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};
